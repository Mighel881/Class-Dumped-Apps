//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ELMCommandResolver : NSObject
{
    struct unordered_map<int, void (^)(NSData *, NSData *, id<ELMContext>, id<ELMController>, UIGestureRecognizer *, void (^)(id, NSError *)), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, void (^)(NSData *, NSData *, id<ELMContext>, id<ELMController>, UIGestureRecognizer *, void (^)(id, NSError *))>>> _blocks;
    NSMutableDictionary *_extensionNodesMap;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: @48@0:8r^{Command=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16@24@32@40, name: resolveCommand:withContext:sender:recognizer:
-     // Error parsing type: @56@0:8r^{Command=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16r^{SenderState=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}24@32@40@48, name: resolveCommand:senderState:withContext:sender:recognizer:
- (void)registerCommandExtension:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)registerNode:(id)arg1 forExtensionNumber:(int)arg2;

@end

