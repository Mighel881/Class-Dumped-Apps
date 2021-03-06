//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSTimer, XsgTouchFrame;

@interface SGBrowserTouchControl : UIView
{
    XsgTouchFrame *_lastFrameToSend;
    unsigned int _maxInputRateInMs;
    _Bool _isKeyboardShowing;
    float _multiplier;
    NSTimer *_sendTimer;
    NSMutableSet *_currentSet;
}

@property(nonatomic) float multiplier; // @synthesize multiplier=_multiplier;
@property(retain, nonatomic) NSMutableSet *currentSet; // @synthesize currentSet=_currentSet;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
- (void).cxx_destruct;
- (long long)getCurrentMilliseconds;
- (void)updateCurrentSet:(id)arg1;
- (void)touchesDone:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)generateTouchFrames:(id)arg1 withEvent:(id)arg2 andAction:(unsigned short)arg3;
- (void)addTouchPointToFrame:(id)arg1 withTouch:(id)arg2 andAction:(unsigned short)arg3;
- (void)timerToSend:(id)arg1;
- (void)startSendTimer;
- (void)endSendTimer;
- (void)reset;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

