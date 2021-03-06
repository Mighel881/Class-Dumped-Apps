//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarouselContainerNodeDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FeedNavigator, ListingPresenter, NSString, RailsContext, RedditService;
@protocol AnalyticsViewProtocol, CarouselDelegatorDelegate, ListingAnalyticsProtocol;

@interface CarouselDelegator : NSObject <UIViewControllerTransitioningDelegate, CarouselContainerNodeDelegate>
{
    id <CarouselDelegatorDelegate> _delegate;
    ListingPresenter *_listingPresenter;
    id <ListingAnalyticsProtocol> _listingAnalytics;
    CDUnknownBlockType _carouselSeeMoreAction;
    CDUnknownBlockType _carouselHasMoreContent;
    CDUnknownBlockType _previewModeEnabledForCarouselItem;
    CDUnknownBlockType _willNavigateToCarouselItemFromCarousel;
    RedditService *_service;
    FeedNavigator *_navigator;
    id <AnalyticsViewProtocol> _analyticsViewProtocol;
}

@property(nonatomic) __weak id <AnalyticsViewProtocol> analyticsViewProtocol; // @synthesize analyticsViewProtocol=_analyticsViewProtocol;
@property(retain, nonatomic) FeedNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(copy, nonatomic) CDUnknownBlockType willNavigateToCarouselItemFromCarousel; // @synthesize willNavigateToCarouselItemFromCarousel=_willNavigateToCarouselItemFromCarousel;
@property(copy, nonatomic) CDUnknownBlockType previewModeEnabledForCarouselItem; // @synthesize previewModeEnabledForCarouselItem=_previewModeEnabledForCarouselItem;
@property(copy, nonatomic) CDUnknownBlockType carouselHasMoreContent; // @synthesize carouselHasMoreContent=_carouselHasMoreContent;
@property(copy, nonatomic) CDUnknownBlockType carouselSeeMoreAction; // @synthesize carouselSeeMoreAction=_carouselSeeMoreAction;
@property(nonatomic) __weak id <ListingAnalyticsProtocol> listingAnalytics; // @synthesize listingAnalytics=_listingAnalytics;
@property(nonatomic) __weak ListingPresenter *listingPresenter; // @synthesize listingPresenter=_listingPresenter;
@property(nonatomic) __weak id <CarouselDelegatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)subscribeToUser:(id)arg1;
- (void)subscribeToSubreddit:(id)arg1;
- (void)toggleSubscriptionToSubscribable:(id)arg1;
- (void)feedPostTitleView:(id)arg1 didTapLinkURL:(id)arg2 context:(unsigned long long)arg3;
- (void)willNavigateToCarouselItem:(id)arg1 fromCarousel:(id)arg2;
- (void)didTapTitleObjectOfCarousel:(id)arg1 object:(id)arg2 index:(unsigned long long)arg3;
- (void)navigateToViewControllerForCarouselItem:(id)arg1 forCarousel:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)viewControllerForCarouselItem:(id)arg1 forCarousel:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)carouselContainerNode:(id)arg1 performRemoveOfCarousel:(id)arg2 removalReason:(unsigned long long)arg3;
- (void)performRemoveOfCarousel:(id)arg1;
- (void)carouselNodeController:(id)arg1 didTapCallToAction:(unsigned long long)arg2 forPost:(id)arg3;
- (void)carouselNodeController:(id)arg1 didTapSubscribeFromTitleWithCarouselItem:(id)arg2 withSubreddit:(id)arg3;
- (void)carouselNodeController:(id)arg1 didTapSubredditWithCarouselItem:(id)arg2 withSubreddit:(id)arg3;
- (void)carouselNodeController:(id)arg1 didTapDomainURLWithCarouselItem:(id)arg2 withURL:(id)arg3;
- (void)didViewCarouselNode:(id)arg1;
- (void)carouselNodeController:(id)arg1 didViewCarouselItem:(id)arg2;
- (void)carouselNodeController:(id)arg1 carouselItem:(id)arg2 didTapSubscribe:(id)arg3;
- (void)carouselNodeController:(id)arg1 didTapComment:(id)arg2 fromCarouselItem:(id)arg3;
- (void)carouselNodeController:(id)arg1 didHideCarouselItem:(id)arg2;
- (void)carouselNodeController:(id)arg1 performSeeMore:(id)arg2;
- (_Bool)didTapActionButtonAction:(id)arg1 carouselItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)carouselNodeController:(id)arg1 didTapCarouselItem:(id)arg2 atIndex:(long long)arg3 carouselItems:(id)arg4;
- (void)carouselNodeController:(id)arg1 performRemoveOfCarousel:(id)arg2 removalReason:(unsigned long long)arg3;
- (_Bool)carouselNodeControllerHasMoreContent:(id)arg1;
- (id)analyticsScreenViewName;
- (void)navigateToRailsWithSubredditCategory:(id)arg1;
- (void)carouselContainerNode:(id)arg1 didTapActionName:(id)arg2 carouselItem:(id)arg3 atIndex:(long long)arg4 carouselItems:(id)arg5;
- (void)carouselContainerNode:(id)arg1 didResizeCarousel:(id)arg2;
- (void)carouselContainerNode:(id)arg1 didTapCarouselItem:(id)arg2 atIndex:(long long)arg3 carouselItems:(id)arg4;
- (void)carouselContainerNode:(id)arg1 didTapSeeMorePillsFromModel:(id)arg2;
- (void)carouselContainerNode:(id)arg1 didTapTitleObject:(id)arg2 index:(unsigned long long)arg3;
- (void)carouselContainerNode:(id)arg1 showPrivacyInfoForCarousel:(id)arg2;
- (void)carouselContainerNode:(id)arg1 didTapLinkInNode:(id)arg2 linkURL:(id)arg3;
- (void)carouselContainerNode:(id)arg1 didSubscribeInNode:(id)arg2;
@property(readonly, nonatomic) RailsContext *railsContext;
- (id)railsPresenter;
- (id)initWithRedditService:(id)arg1 analyticsViewProtocol:(id)arg2 feedNavigator:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

