//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "DetailedSubscribeNodeDelegate-Protocol.h"
#import "DiscoveryFandomBannerNodeDelegate-Protocol.h"
#import "DiscoveryHeaderNodeDelegate-Protocol.h"
#import "LocationActionDelegate-Protocol.h"
#import "PillWidgetNodeDelegate-Protocol.h"
#import "PreviewLocationActionDelegate-Protocol.h"
#import "PrivacyViewDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "SpellingSuggestionNodeDelegate-Protocol.h"
#import "StackedSearchesNodeDelegate-Protocol.h"

@class ASDisplayNode, Carousel, CarouselNode, CarouselNodeController, DetailedSubscribeNode, DiscoveryFandomBannerNode, DiscoveryHeaderNode, LocationActionNode, LocationManager, NSString, PillWidgetNode, PreviewLocationActionNode, SpellingSuggestionNode, StackedSearchesNode;
@protocol CarouselContainerNodeDelegate;

@interface CarouselContainerNode : BaseFeedDisplayNode <LocationActionDelegate, PreviewLocationActionDelegate, PrivacyViewDelegate, DiscoveryHeaderNodeDelegate, DetailedSubscribeNodeDelegate, RUIActionSheetViewControllerDelegate, PillWidgetNodeDelegate, DiscoveryFandomBannerNodeDelegate, SpellingSuggestionNodeDelegate, StackedSearchesNodeDelegate>
{
    _Bool _showGradientBackground;
    DiscoveryHeaderNode *_headerNode;
    Carousel *_carousel;
    LocationManager *_locationManager;
    id <CarouselContainerNodeDelegate> _delegate;
    CarouselNodeController *_carouselNodeController;
    DetailedSubscribeNode *_detailedSubcribeNode;
    LocationActionNode *_locationActionNode;
    PreviewLocationActionNode *_previewLocationActionNode;
    ASDisplayNode *_titleSeparatorNode;
    ASDisplayNode *_gradientNode;
    PillWidgetNode *_pillWidgetNode;
    StackedSearchesNode *_stackedSearchesNode;
    DiscoveryFandomBannerNode *_fandomBannerNode;
    SpellingSuggestionNode *_spellingSuggestionNode;
}

@property(retain, nonatomic) SpellingSuggestionNode *spellingSuggestionNode; // @synthesize spellingSuggestionNode=_spellingSuggestionNode;
@property(retain, nonatomic) DiscoveryFandomBannerNode *fandomBannerNode; // @synthesize fandomBannerNode=_fandomBannerNode;
@property(retain, nonatomic) StackedSearchesNode *stackedSearchesNode; // @synthesize stackedSearchesNode=_stackedSearchesNode;
@property(retain, nonatomic) PillWidgetNode *pillWidgetNode; // @synthesize pillWidgetNode=_pillWidgetNode;
@property(retain, nonatomic) ASDisplayNode *gradientNode; // @synthesize gradientNode=_gradientNode;
@property(retain, nonatomic) ASDisplayNode *titleSeparatorNode; // @synthesize titleSeparatorNode=_titleSeparatorNode;
@property(retain, nonatomic) PreviewLocationActionNode *previewLocationActionNode; // @synthesize previewLocationActionNode=_previewLocationActionNode;
@property(retain, nonatomic) LocationActionNode *locationActionNode; // @synthesize locationActionNode=_locationActionNode;
@property(retain, nonatomic) DetailedSubscribeNode *detailedSubcribeNode; // @synthesize detailedSubcribeNode=_detailedSubcribeNode;
@property(retain, nonatomic) CarouselNodeController *carouselNodeController; // @synthesize carouselNodeController=_carouselNodeController;
@property(nonatomic) __weak id <CarouselContainerNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) Carousel *carousel; // @synthesize carousel=_carousel;
@property(retain, nonatomic) DiscoveryHeaderNode *headerNode; // @synthesize headerNode=_headerNode;
@property(nonatomic) _Bool showGradientBackground; // @synthesize showGradientBackground=_showGradientBackground;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)didBecomeFullyVisible;
- (void)willBeginDisplaying;
- (void)stackedSearchesNode:(id)arg1 didTapCarouselItem:(id)arg2 atIndex:(long long)arg3;
- (void)spellingSuggestionNode:(id)arg1 didTapCarouselItem:(id)arg2;
- (void)discoveryFandomBannerNode:(id)arg1 didTapOverflowButton:(id)arg2 carouselItem:(id)arg3;
- (void)discoveryFandomBannerNode:(id)arg1 didTapTitleObject:(id)arg2 buttonIndex:(long long)arg3 carouselItem:(id)arg4;
- (void)discoveryFandomBannerNode:(id)arg1 didTapActionName:(id)arg2 carouselItem:(id)arg3;
- (void)discoveryFandomBannerNode:(id)arg1 didTapCarouselItem:(id)arg2;
- (void)pillWidgetNode:(id)arg1 didTapSeeMorePillsFromModel:(id)arg2;
- (void)pillWidgetNode:(id)arg1 didSelectPill:(id)arg2 index:(unsigned long long)arg3;
- (void)detailedSubscribeNodeDidTapLink:(id)arg1;
- (void)detailedSubscribeNodeDidSubscribe:(id)arg1;
- (void)showLessOfCarousel:(id)arg1;
- (void)hideCarousel:(id)arg1;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)analyticsScreenViewName;
- (void)discoveryHeaderNode:(id)arg1 didTapTitleObject:(id)arg2 index:(unsigned long long)arg3;
- (void)discoveryHeaderNode:(id)arg1 didTapOverflowButton:(id)arg2;
- (void)showOverflowActionSheet:(id)arg1;
- (void)refreshCarousel;
- (void)prepareForReuse;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (id)createGradientNode;
- (void)configureBasicNodesWithCarousel:(id)arg1;
@property(readonly, nonatomic) CarouselNode *carouselNode;
- (id)initWithCarousel:(id)arg1 delegate:(id)arg2;
- (void)privacyView:(id)arg1 locationPermissionAuthorized:(_Bool)arg2;
- (void)previewLocationActionNode:(id)arg1 didTapMoreDetailsButton:(id)arg2;
- (void)previewLocationActionNode:(id)arg1 didTapAllowLocationButton:(id)arg2;
- (void)locationActionNode:(id)arg1 didTapPreviewButton:(id)arg2;
- (void)locationActionNode:(id)arg1 didTapOverflowButton:(id)arg2;
- (void)locationActionNode:(id)arg1 didTapAllowLocationButton:(id)arg2;
- (void)allowLocationAction;
- (void)locationPermissionWasGranted;
- (_Bool)shouldShowLocationForm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

