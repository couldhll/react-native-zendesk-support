/*
 *
 *  ZDKRequestsResponse.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 10/11/2014.  
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>

@interface ZDKRequestsResponse : NSObject

+ (NSArray *) parseRequestListWithDictionary:(NSDictionary*)dictionary;

@end
