//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (Groot)
- (void)grt_setRelationship:(id)arg1 fromJSONDictionary:(id)arg2 mergeChanges:(_Bool)arg3 error:(id *)arg4;
- (void)grt_setAttribute:(id)arg1 fromJSONDictionary:(id)arg2 mergeChanges:(_Bool)arg3 error:(id *)arg4;
- (id)grt_JSONDictionarySerializingRelationships:(id)arg1;
- (void)grt_serializeJSONValue:(id)arg1 uniqueAttribute:(id)arg2 error:(id *)arg3;
- (void)grt_serializeJSONDictionary:(id)arg1 mergeChanges:(_Bool)arg2 error:(id *)arg3;
@end

