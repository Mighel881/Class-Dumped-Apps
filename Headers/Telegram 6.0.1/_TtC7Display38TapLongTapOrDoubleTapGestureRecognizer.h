//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <Display/UIGestureRecognizerDelegate-Protocol.h>

@interface _TtC7Display38TapLongTapOrDoubleTapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    // Error parsing type: , name: touchLocationAndTimestamp
    // Error parsing type: , name: touchCount
    // Error parsing type: , name: tapCount
    // Error parsing type: , name: timer
    // Error parsing type: , name: lastRecognizedGestureAndLocation
    // Error parsing type: , name: tapActionAtPoint
    // Error parsing type: , name: longTap
    // Error parsing type: , name: recognizedLongTap
    // Error parsing type: , name: externalUpdated
    // Error parsing type: , name: externalEnded
    // Error parsing type: , name: highlight
    // Error parsing type: , name: hapticFeedback
    // Error parsing type: , name: highlightPoint
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
