//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCEditViewModel.h"

#import "AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate-Protocol.h"

@class AWEVideoPublishMusicSelectUserCollectionsReqeustManager, NSArray, NSString, RACSignal, RACSubject;
@protocol ACCVideoEditMusicPlayerDelegate;

@interface ACCVideoEditMusicViewModel : ACCEditViewModel <AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate>
{
    _Bool _isRetryingFetchUserCollectedMusic;
    id <ACCVideoEditMusicPlayerDelegate> _playerDelegate;
    RACSubject *_willSelectMusicSubject;
    RACSubject *_deselectMusicSubject;
    RACSubject *_didRequestMusicSubject;
    RACSubject *_didAddMusicSubject;
    RACSubject *_mvModelDidSuccessChangeMusicSubject;
    RACSubject *_mvChangeMusicLoadingSubject;
    RACSubject *_changeMusicTipsSubject;
    RACSubject *_collectedMusicListSubject;
    NSArray *_musicList;
    NSArray *_userCollectedMusicList;
    AWEVideoPublishMusicSelectUserCollectionsReqeustManager *_userMusicCollectionReqManager;
}

@property(nonatomic) _Bool isRetryingFetchUserCollectedMusic; // @synthesize isRetryingFetchUserCollectedMusic=_isRetryingFetchUserCollectedMusic;
@property(retain, nonatomic) AWEVideoPublishMusicSelectUserCollectionsReqeustManager *userMusicCollectionReqManager; // @synthesize userMusicCollectionReqManager=_userMusicCollectionReqManager;
@property(copy, nonatomic) NSArray *userCollectedMusicList; // @synthesize userCollectedMusicList=_userCollectedMusicList;
@property(copy, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) RACSubject *collectedMusicListSubject; // @synthesize collectedMusicListSubject=_collectedMusicListSubject;
@property(retain, nonatomic) RACSubject *changeMusicTipsSubject; // @synthesize changeMusicTipsSubject=_changeMusicTipsSubject;
@property(retain, nonatomic) RACSubject *mvChangeMusicLoadingSubject; // @synthesize mvChangeMusicLoadingSubject=_mvChangeMusicLoadingSubject;
@property(retain, nonatomic) RACSubject *mvModelDidSuccessChangeMusicSubject; // @synthesize mvModelDidSuccessChangeMusicSubject=_mvModelDidSuccessChangeMusicSubject;
@property(retain, nonatomic) RACSubject *didAddMusicSubject; // @synthesize didAddMusicSubject=_didAddMusicSubject;
@property(retain, nonatomic) RACSubject *didRequestMusicSubject; // @synthesize didRequestMusicSubject=_didRequestMusicSubject;
@property(retain, nonatomic) RACSubject *deselectMusicSubject; // @synthesize deselectMusicSubject=_deselectMusicSubject;
@property(retain, nonatomic) RACSubject *willSelectMusicSubject; // @synthesize willSelectMusicSubject=_willSelectMusicSubject;
@property(nonatomic) __weak id <ACCVideoEditMusicPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
- (void).cxx_destruct;
- (void)onCleared;
- (void)retryFetchFirstPage;
- (void)fetchNextPage:(CDUnknownBlockType)arg1;
- (_Bool)hasMore;
- (_Bool)isProcessingFetchingData;
- (id)publishModel;
- (_Bool)useMusicSelectPanel;
@property(readonly, nonatomic) RACSignal *collectedMusicListSignal;
@property(readonly, nonatomic) RACSignal *musicListSignal;
@property(readonly, nonatomic) RACSignal *changeMusicTipsSignal;
@property(readonly, nonatomic) RACSignal *mvChangeMusicLoadingSignal;
@property(readonly, nonatomic) RACSignal *mvModelDidSuccessChangeMusicSignal;
@property(readonly, nonatomic) RACSignal *didAddMusicSignal;
@property(readonly, nonatomic) RACSignal *didRequestMusicSignal;
@property(readonly, nonatomic) RACSignal *deselectMusicSignal;
@property(readonly, nonatomic) RACSignal *willSelectMusicSignal;
- (void)didFinishSelectMusic:(id)arg1 range:(struct _HTSAudioRange)arg2;
- (void)requestMusicDetailIfNeeded:(id)arg1;
- (void)deselectMusic;
- (id)generateUserCollectedMusicListWithRspModel:(id)arg1;
- (void)resetUserMusicCollectionData;
- (void)fetchUserMusicCollectionDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetCollectedMusicListIfNeeded;
- (void)markShowIfNeeded;
- (void)handleSelectMusic:(id)arg1 error:(id)arg2 removeMusicSticker:(_Bool)arg3;
- (void)deselectMusic:(id)arg1;
- (unsigned long long)selectMusicInLibrary;
- (unsigned long long)selectMusicInPanel;
- (unsigned long long)selectMusic;
- (void)updateMusicList;
- (void)fetchAIRecommend:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
