//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1ConversationCardDetailsViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>
{
}

+ (id)sharedLayoutDelegate;
- (void)layoutSubviewsForLayoutableView:(id)arg1;
- (struct CGSize)layoutableView:(id)arg1 sizeThatFits:(struct CGSize)arg2;
- (struct CGRect)_layoutThankYouLabelForLayoutState:(id)arg1 viewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(struct CGPoint)arg4;
- (struct CGRect)_layoutTitleAndButtonsForLayoutState:(id)arg1 viewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
