//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface INKSnapshot : NSObject
{
    unique_ptr_7ea30468 _snapshot;
}

+ (id)snapshotFromData:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: r^{Snapshot=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<ink::proto::ElementBundle>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::ElementBundle>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::StorageAction>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::StorageAction>=^{Arena}ii^{Rep}}{RepeatedField<int>=ii^v}{RepeatedPtrField<ink::proto::PerPageProperties>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{PageProperties}Q}16@0:8, name: proto
- (id)serialize;
- (id)withoutPendingMutationPacket;
- (id)getPendingMutationPacket:(id *)arg1;
@property(readonly) _Bool hasPendingMutationPacket;
@property(readonly) unsigned long long fingerprint;
-     // Error parsing type: @24@0:8r^{Snapshot=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<ink::proto::ElementBundle>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::ElementBundle>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::StorageAction>=^{Arena}ii^{Rep}}{RepeatedPtrField<ink::proto::StorageAction>=^{Arena}ii^{Rep}}{RepeatedField<int>=ii^v}{RepeatedPtrField<ink::proto::PerPageProperties>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{PageProperties}Q}16, name: initWithSnapshot:
- (id)initWithSnapshotPtr:(unique_ptr_7ea30468)arg1;

@end
