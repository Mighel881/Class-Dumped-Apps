//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeFeaturedContentHubViewProvider-Protocol.h"

@class HUBComponentDefaults, NSString, NSURL, SPTPodcastEpisodeFeaturedContentContentOperationFactory;
@protocol SPTHubCommandHandlerFactory, SPTHubsRendererFactory, SPTHugsFactory;

@interface SPTPodcastEpisodeFeaturedContentHubManager : NSObject <SPTPodcastEpisodeFeaturedContentHubViewProvider>
{
    NSString *_serviceIdentifier;
    NSURL *_URL;
    NSString *_referrerIdentifier;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTPodcastEpisodeFeaturedContentContentOperationFactory *_contentOperationFactory;
    HUBComponentDefaults *_componentDefaults;
    id <SPTHubCommandHandlerFactory> _commandHandlerFactory;
}

@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) SPTPodcastEpisodeFeaturedContentContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)commandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)hubViewWithFrame:(struct CGRect)arg1;
- (id)viewModelProvider;
- (id)initWithServiceIdentifier:(id)arg1 URL:(id)arg2 referrerIdentifier:(id)arg3 hubsRendererFactory:(id)arg4 hugsFactory:(id)arg5 contentOperationsFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

