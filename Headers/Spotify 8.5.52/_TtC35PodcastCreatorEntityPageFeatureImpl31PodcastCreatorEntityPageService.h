//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP31PodcastCreatorEntityPageFeature39SPTPodcastCreatorEntityPageViewProvider_;

@interface _TtC35PodcastCreatorEntityPageFeatureImpl31PodcastCreatorEntityPageService : NSObject
{
    // Error parsing type: , name: creatorPageRegistrationToken
    // Error parsing type: , name: creatorShowPageRegistrationToken
    // Error parsing type: , name: flags
    // Error parsing type: , name: creatorLoader
    // Error parsing type: , name: $__lazy_storage_$_viewProvider
    // Error parsing type: , name: containerService
    // Error parsing type: , name: remoteConfigurationService
    // Error parsing type: , name: glueService
    // Error parsing type: , name: hubsService
    // Error parsing type: , name: networkService
    // Error parsing type: , name: browseService
    // Error parsing type: , name: podcastUiService
    // Error parsing type: , name: homeUiService
    // Error parsing type: , name: pageLoaderViewService
    // Error parsing type: , name: performanceService
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideFlags;
- (id)provideCreatorShowsPageViewControllerWith:(id)arg1 context:(id)arg2;
- (id)providePageLoadedViewControllerWith:(id)arg1 context:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;
@property(nonatomic, retain) id <_TtP31PodcastCreatorEntityPageFeature39SPTPodcastCreatorEntityPageViewProvider_> viewProvider;

@end
