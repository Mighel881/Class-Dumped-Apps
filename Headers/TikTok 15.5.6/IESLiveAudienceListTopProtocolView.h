//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveAudienceListStore;
@protocol HTSLiveAudienceListTopViewDelegate;

@interface IESLiveAudienceListTopProtocolView : UIView
{
    id <HTSLiveAudienceListTopViewDelegate> _delegate;
    HTSLiveAudienceListStore *_store;
}

@property(retain, nonatomic) HTSLiveAudienceListStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <HTSLiveAudienceListTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateSlideView:(double)arg1;

@end
