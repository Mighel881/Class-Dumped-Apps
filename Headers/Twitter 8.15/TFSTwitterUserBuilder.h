//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@class NSString, TFSCS2TwitterUserBuilder;

@interface TFSTwitterUserBuilder : NSObject <TFSModelBuilder>
{
    _Bool _fromGraphQL;
    TFSCS2TwitterUserBuilder *_cs2UserBuilder;
}

@property(readonly, nonatomic) _Bool fromGraphQL; // @synthesize fromGraphQL=_fromGraphQL;
@property(readonly, nonatomic) TFSCS2TwitterUserBuilder *cs2UserBuilder; // @synthesize cs2UserBuilder=_cs2UserBuilder;
- (void).cxx_destruct;
- (id)userWithJSONDictionary:(id)arg1;
- (id)usersWithJSONArray:(id)arg1;
- (id)userWithJSONData:(id)arg1 error:(out id *)arg2;
- (id)usersByIdDictionaryWithJSONDictionary:(id)arg1;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)initUsingCS2Builder:(_Bool)arg1 fromGraphQL:(_Bool)arg2;
- (id)initFromGraphQL:(_Bool)arg1;
- (id)initUsingCS2Builder:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

