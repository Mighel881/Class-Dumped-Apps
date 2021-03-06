//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface IGDiscussionStickerModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pk;
    NSString *_question;
    NSString *_subtitle;
    NSString *_socialContextString;
    NSString *_textColor;
    NSString *_backgroundColor;
    NSString *_secondaryTextColor;
    NSString *_secondaryBackgroundColor;
    NSArray *_facepileUsers;
    NSNumber *_commentCount;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(readonly, copy, nonatomic) NSArray *facepileUsers; // @synthesize facepileUsers=_facepileUsers;
@property(readonly, copy, nonatomic) NSString *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(readonly, copy, nonatomic) NSString *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(readonly, copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *socialContextString; // @synthesize socialContextString=_socialContextString;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 question:(id)arg2 subtitle:(id)arg3 socialContextString:(id)arg4 textColor:(id)arg5 backgroundColor:(id)arg6 secondaryTextColor:(id)arg7 secondaryBackgroundColor:(id)arg8 facepileUsers:(id)arg9 commentCount:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (_Bool)isPublished;

@end

