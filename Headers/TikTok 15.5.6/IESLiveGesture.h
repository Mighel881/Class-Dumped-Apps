//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer;

@interface IESLiveGesture : NSObject
{
    _Bool _allowLandscapeRespond;
    _Bool _cancelsTouchesInView;
    UIGestureRecognizer *_recognizer;
    CDUnknownBlockType _shouldBegin;
    CDUnknownBlockType _shouldReceiveTouch;
    CDUnknownBlockType _action;
}

+ (id)initRelatedRecognizerBy:(unsigned long long)arg1;
+ (id)initRecognizerBy:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) CDUnknownBlockType shouldReceiveTouch; // @synthesize shouldReceiveTouch=_shouldReceiveTouch;
@property(copy, nonatomic) CDUnknownBlockType shouldBegin; // @synthesize shouldBegin=_shouldBegin;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) _Bool allowLandscapeRespond; // @synthesize allowLandscapeRespond=_allowLandscapeRespond;
@property(retain, nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (id)init;
- (id)initByIdentifier:(unsigned long long)arg1;

@end
