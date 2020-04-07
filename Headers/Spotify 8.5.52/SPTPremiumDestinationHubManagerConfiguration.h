//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentRegistry, NSString, SPTDataLoaderFactory, SPTPersistentCache, SPTPremiumDestinationGLUETheme, SPTPremiumDestinationLogger;
@protocol SPTAlertInterface, SPTHubsRendererFactory, SPTHugsFactory, SPTNetworkConnectivityController, SPTPremiumDestinationExperiments, SPTPremiumDestinationHubComponentsFactory;

@interface SPTPremiumDestinationHubManagerConfiguration : NSObject
{
    NSString *_serviceIdentifier;
    HUBComponentRegistry *_componentRegistry;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTPremiumDestinationExperiments> _premiumDestinationExperiments;
    id <SPTPremiumDestinationHubComponentsFactory> _premiumDestinationHubComponentFactory;
    SPTPremiumDestinationGLUETheme *_GLUETheme;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTPersistentCache *_persistentCache;
    id <SPTAlertInterface> _alertInterface;
    SPTPremiumDestinationLogger *_premiumDestinationLogger;
}

@property(readonly, nonatomic) SPTPremiumDestinationLogger *premiumDestinationLogger; // @synthesize premiumDestinationLogger=_premiumDestinationLogger;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(retain, nonatomic) id <SPTPremiumDestinationHubComponentsFactory> premiumDestinationHubComponentFactory; // @synthesize premiumDestinationHubComponentFactory=_premiumDestinationHubComponentFactory;
@property(retain, nonatomic) id <SPTPremiumDestinationExperiments> premiumDestinationExperiments; // @synthesize premiumDestinationExperiments=_premiumDestinationExperiments;
@property(retain, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(retain, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(retain, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)arg1 componentRegistry:(id)arg2 hubsRendererFactory:(id)arg3 hugsFactory:(id)arg4 premiumDestinationExperiments:(id)arg5 premiumDestinationHubComponentsFactory:(id)arg6 GLUETheme:(id)arg7 networkConnectivityController:(id)arg8 dataLoaderFactory:(id)arg9 persistentCache:(id)arg10 alertInterface:(id)arg11 premiumDestinationLogger:(id)arg12;

@end
