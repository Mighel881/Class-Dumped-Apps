//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGDALService, IBGSurveyInteractionRepo;

@interface IBGUserRepository : NSObject
{
    IBGDALService *_dalService;
    IBGSurveyInteractionRepo *_surveyInteractionRepo;
}

@property(retain, nonatomic) IBGSurveyInteractionRepo *surveyInteractionRepo; // @synthesize surveyInteractionRepo=_surveyInteractionRepo;
@property(retain, nonatomic) IBGDALService *dalService; // @synthesize dalService=_dalService;
- (void).cxx_destruct;
- (id)userAttributeWithKey:(id)arg1 fromUser:(id)arg2;
- (void)updateUserMO:(id)arg1 withUser:(id)arg2;
- (void)saveInteraction:(id)arg1;
- (id)userAttributesJSONStringForUUID:(id)arg1;
- (id)userAttributesDictionaryForUUID:(id)arg1;
- (id)attributeValueForKey:(id)arg1 fromUUID:(id)arg2;
- (void)deleteAllAttributesForUUID:(id)arg1;
- (void)deleteAttributeWithKey:(id)arg1 uuid:(id)arg2;
- (void)migrateAllAttributesFromUUID:(id)arg1 toUUID:(id)arg2;
- (void)updateOrCreateAttributeWithKey:(id)arg1 value:(id)arg2 uuid:(id)arg3;
- (void)deleteInteractionsWithSurveyIDs:(id)arg1;
- (void)deleteInteractionsForUserWithUUID:(id)arg1;
- (void)migrateSurveyInteractionsFromUUID:(id)arg1 toUUID:(id)arg2;
- (void)deleteOutdatedUsersExceptUUID:(id)arg1;
- (void)deleteUsersAboveCountThresholdExceptUUID:(id)arg1;
- (id)getOrCreateInteractionWithSurveyID:(id)arg1 userUUID:(id)arg2;
- (_Bool)userExistsWithUUID:(id)arg1;
- (id)updateOrCreateUser:(id)arg1;
- (id)getOrCreateUserWithUUID:(id)arg1;
- (void)waitForAllOperationsToFinish;
- (id)userMOWithUUID:(id)arg1;
- (id)allUsers;

@end
