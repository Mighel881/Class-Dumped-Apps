//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString;

@interface SPTHubsKitCommand : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_name;
    NSDictionary *_data;
    NSDictionary *_dictionaryRepresentation;
}

+ (id)spt_search_clearRecents;
+ (id)spt_search_removeRecentAtIndex:(unsigned long long)arg1;
+ (id)spt_search_contextMenuCommandWithURI:(id)arg1 track:(id)arg2;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqualToCommand:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;

@end
