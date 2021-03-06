//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class UIImpactFeedbackGenerator;
@protocol IGForceTouchGestureRecognizerPreviewDelegate;

@interface IGForceTouchGestureRecognizer : UILongPressGestureRecognizer
{
    _Bool _hapticFeedback;
    double _forceTouchThreshold;
    id <IGForceTouchGestureRecognizerPreviewDelegate> _previewDelegate;
    double _previewForceTouchThreshold;
    double _normalizedForce;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) double normalizedForce; // @synthesize normalizedForce=_normalizedForce;
@property(nonatomic) _Bool hapticFeedback; // @synthesize hapticFeedback=_hapticFeedback;
@property(nonatomic) double previewForceTouchThreshold; // @synthesize previewForceTouchThreshold=_previewForceTouchThreshold;
@property(nonatomic) __weak id <IGForceTouchGestureRecognizerPreviewDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) double forceTouchThreshold; // @synthesize forceTouchThreshold=_forceTouchThreshold;
- (void).cxx_destruct;
- (double)_currentNormalizedForceWithTouches:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setImpactFeedbackStyle:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

