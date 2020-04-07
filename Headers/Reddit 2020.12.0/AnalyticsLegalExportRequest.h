//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsLegalExportRequest : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _user_idsIsSet;
    _Bool _typeIsSet;
    _Bool _requested_informationIsSet;
    _Bool _statusIsSet;
    _Bool _due_timestampIsSet;
    _Bool _received_timestampIsSet;
    _Bool _started_timestampIsSet;
    _Bool _ended_timestampIsSet;
    _Bool _ads_data_statusIsSet;
    _Bool _gifts_data_statusIsSet;
    _Bool _has_ndo;
    _Bool _has_ndoIsSet;
    NSMutableArray *_user_ids;
    NSString *_type;
    NSMutableArray *_requested_information;
    NSString *_status;
    long long _due_timestamp;
    long long _received_timestamp;
    long long _started_timestamp;
    long long _ended_timestamp;
    NSString *_ads_data_status;
    NSString *_gifts_data_status;
}

@property(nonatomic) _Bool has_ndoIsSet; // @synthesize has_ndoIsSet=_has_ndoIsSet;
@property(nonatomic) _Bool has_ndo; // @synthesize has_ndo=_has_ndo;
@property(nonatomic) _Bool gifts_data_statusIsSet; // @synthesize gifts_data_statusIsSet=_gifts_data_statusIsSet;
@property(copy, nonatomic) NSString *gifts_data_status; // @synthesize gifts_data_status=_gifts_data_status;
@property(nonatomic) _Bool ads_data_statusIsSet; // @synthesize ads_data_statusIsSet=_ads_data_statusIsSet;
@property(copy, nonatomic) NSString *ads_data_status; // @synthesize ads_data_status=_ads_data_status;
@property(nonatomic) _Bool ended_timestampIsSet; // @synthesize ended_timestampIsSet=_ended_timestampIsSet;
@property(nonatomic) long long ended_timestamp; // @synthesize ended_timestamp=_ended_timestamp;
@property(nonatomic) _Bool started_timestampIsSet; // @synthesize started_timestampIsSet=_started_timestampIsSet;
@property(nonatomic) long long started_timestamp; // @synthesize started_timestamp=_started_timestamp;
@property(nonatomic) _Bool received_timestampIsSet; // @synthesize received_timestampIsSet=_received_timestampIsSet;
@property(nonatomic) long long received_timestamp; // @synthesize received_timestamp=_received_timestamp;
@property(nonatomic) _Bool due_timestampIsSet; // @synthesize due_timestampIsSet=_due_timestampIsSet;
@property(nonatomic) long long due_timestamp; // @synthesize due_timestamp=_due_timestamp;
@property(nonatomic) _Bool statusIsSet; // @synthesize statusIsSet=_statusIsSet;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) _Bool requested_informationIsSet; // @synthesize requested_informationIsSet=_requested_informationIsSet;
@property(retain, nonatomic) NSMutableArray *requested_information; // @synthesize requested_information=_requested_information;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool user_idsIsSet; // @synthesize user_idsIsSet=_user_idsIsSet;
@property(retain, nonatomic) NSMutableArray *user_ids; // @synthesize user_ids=_user_ids;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetHas_ndo;
- (void)unsetGifts_data_status;
- (void)unsetAds_data_status;
- (void)unsetEnded_timestamp;
- (void)unsetStarted_timestamp;
- (void)unsetReceived_timestamp;
- (void)unsetDue_timestamp;
- (void)unsetStatus;
- (void)unsetRequested_information;
- (void)unsetType;
- (void)unsetUser_ids;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser_ids:(id)arg1 type:(id)arg2 requested_information:(id)arg3 status:(id)arg4 due_timestamp:(long long)arg5 received_timestamp:(long long)arg6 started_timestamp:(long long)arg7 ended_timestamp:(long long)arg8 ads_data_status:(id)arg9 gifts_data_status:(id)arg10 has_ndo:(_Bool)arg11;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
