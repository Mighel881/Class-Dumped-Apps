//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSNumber, NSString;

@interface AWSPinpointTargetingChannelResponse : AWSModel
{
    NSString *_applicationId;
    NSString *_creationDate;
    NSNumber *_enabled;
    NSNumber *_hasCredential;
    NSString *_identifier;
    NSNumber *_isArchived;
    NSString *_lastModifiedBy;
    NSString *_lastModifiedDate;
    NSNumber *_version;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSString *lastModifiedBy; // @synthesize lastModifiedBy=_lastModifiedBy;
@property(retain, nonatomic) NSNumber *isArchived; // @synthesize isArchived=_isArchived;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber *hasCredential; // @synthesize hasCredential=_hasCredential;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;

@end

