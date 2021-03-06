//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CAShapeLayer, IGCoreTextView, IGDirectMessageCellViewModel, IGDirectTextMessageBubbleViewModel;

@interface IGDirectSendAnimationView : UIView
{
    IGDirectTextMessageBubbleViewModel *_textMessageBubbleViewModel;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    struct CGRect _ovalContainerBounds;
    CAShapeLayer *_animatableCornerMask;
    CALayer *_backgroundLayer;
    CAGradientLayer *_gradientLayer;
    IGCoreTextView *_textView;
}

@property(readonly, nonatomic) IGCoreTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(readonly, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void).cxx_destruct;
- (void)performSendAnimationWithCollectionView:(id)arg1 oldCollectionViewBounds:(struct CGRect)arg2 shouldPerformScrollPositionRestoration:(_Bool)arg3;
- (void)configureWithTextMessageBubbleViewModel:(id)arg1 messageCellViewModel:(id)arg2 ovalContainerBounds:(struct CGRect)arg3 composerTheme:(id)arg4 threadAppearance:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

