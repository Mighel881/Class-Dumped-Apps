//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectInboxViewModelGenerator, IGPostCreationManager, IGReelSeenStateStore, IGReelStore, IGStoryDataController, NSString;
@protocol IGUserExperimentSetProviding><IGUserLauncherSetProviding;

@interface IGDirectInboxViewModelDataCollectionSubscriptionBuilder : NSObject
{
    IGStoryDataController *_storyDataController;
    IGReelSeenStateStore *_seenStateStore;
    IGPostCreationManager *_postCreationManager;
    IGReelStore *_reelStore;
    NSString *_currentUserPk;
    id <IGUserExperimentSetProviding><IGUserLauncherSetProviding> _featureSetProvider;
    IGDirectInboxViewModelGenerator *_viewModelGenerator;
}

- (void).cxx_destruct;
- (id)buildInboxViewModelsSubscriptionFromInboxPipe:(id)arg1 accessoriesPipe:(id)arg2 folder:(id)arg3 filterType:(long long)arg4;
- (id)buildInboxViewModelGeneratorInputSubscriptionFromInboxPipe:(id)arg1 accessoriesPipe:(id)arg2 folder:(id)arg3 filterType:(long long)arg4;
- (id)initWithStoryDataController:(id)arg1 seenStateStore:(id)arg2 reelStore:(id)arg3 featureSetProvider:(id)arg4 postCreationManager:(id)arg5 viewModelGenerator:(id)arg6 currentUserPk:(id)arg7;

@end

