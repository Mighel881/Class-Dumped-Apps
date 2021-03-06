//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XBXTitle;
@protocol SGTitleAchievementsDelegate, XBXISLSServiceManager;

@interface SGTitleAchievementsDataModel : NSObject
{
    XBXTitle *_title;
    NSString *_userXuid;
    long long _state;
    NSArray *_allAchievements;
    NSArray *_earnedAchievements;
    NSArray *_unearnedAchievements;
    id <SGTitleAchievementsDelegate> _delegate;
    id _context;
    NSArray *_achievementList;
}

@property(retain, nonatomic) NSArray *achievementList; // @synthesize achievementList=_achievementList;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <SGTitleAchievementsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *unearnedAchievements; // @synthesize unearnedAchievements=_unearnedAchievements;
@property(readonly, nonatomic) NSArray *earnedAchievements; // @synthesize earnedAchievements=_earnedAchievements;
@property(readonly, nonatomic) NSArray *allAchievements; // @synthesize allAchievements=_allAchievements;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *userXuid; // @synthesize userXuid=_userXuid;
@property(retain, nonatomic) XBXTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)updateParentTitle:(id)arg1;
@property(readonly, nonatomic) unsigned long long titleId;
- (void)callbackDelegateForError:(id)arg1;
- (void)callbackDelegateForSuccess:(id)arg1;
- (void)onDataLoadFailed:(id)arg1;
- (void)onDataLoadSuccess:(id)arg1;
- (void)loadDataFromServer;
@property(readonly, nonatomic) __weak id <XBXISLSServiceManager> serviceManager;
- (void)reset;
- (void)unregisterDelegate;
- (void)dealloc;
- (void)load:(_Bool)arg1;
- (id)initWithUserXuid:(id)arg1 title:(id)arg2 callbackDelegate:(id)arg3 requestContext:(id)arg4;
- (id)initWithUserXuid:(id)arg1 title:(id)arg2 callbackDelegate:(id)arg3;

@end

