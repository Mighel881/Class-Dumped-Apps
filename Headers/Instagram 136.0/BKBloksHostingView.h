//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/BKBloksModelTreeListener-Protocol.h>
#import <FBSharedFramework/BKBloksRootViewListener-Protocol.h>

@class BKContext, NSString;
@protocol BKBloksRootView;

@interface BKBloksHostingView : UIView <BKBloksModelTreeListener, BKBloksRootViewListener>
{
    BKContext *_context;
    UIView<BKBloksRootView> *_bloksView;
}

- (void).cxx_destruct;
- (void)bloksRootViewDidInvalidateSize:(id)arg1;
- (void)bloksModelTreeDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupView:(id)arg1 isRenderCoreEnabled:(_Bool)arg2;
- (void)updateWithParseResult:(const struct BKBloksParseResult *)arg1 context:(id)arg2;
- (void)updateWithModel:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

