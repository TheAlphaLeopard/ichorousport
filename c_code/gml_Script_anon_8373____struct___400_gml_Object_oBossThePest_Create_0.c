// gml_Script_anon_8373____struct___400_gml_Object_oBossThePest_Create_0 @ 0x140816c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8373____struct___400_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 *local_1e0;
  longlong **local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  undefined1 **local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined1 *local_188 [14];
  undefined1 local_118 [12];
  byte local_10c;
  
  local_res18 = 0;
  local_210 = "gml_Script_anon@7210@___struct___400@gml_Object_oBossThePest_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x1b3;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_18c = 0;
  local_198 = 0;
  local_1f4 = 0;
  local_200 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x1b5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a09ba8);
  cVar3 = FUN_140e491e0(uVar4);
  if (cVar3 == '\0') {
    local_25c = 0xf;
    local_268 = 0x10000010000035b;
    puVar6 = &local_268;
    uVar7 = 2;
    local_res18 = 2;
  }
  else {
    uStack_24c = 0xf;
    local_258 = 0x10000010000035c;
    puVar6 = &local_258;
    uVar7 = 1;
    local_res18 = 1;
  }
  uVar2 = uStack_24c;
  uVar1 = local_25c;
  local_228 = *(undefined4 *)puVar6;
  uStack_224 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_220 = *(undefined4 *)(puVar6 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_228);
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    local_res18 = uVar7;
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    local_res18 = uVar7;
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
  }
  FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_278);
  local_208 = 0x1b6;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 0;
  local_288 = 0;
  FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_288);
  local_208 = 0x1b8;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  local_228 = _DAT_1419e8ae0;
  uStack_224 = uRam00000001419e8ae4;
  uStack_220 = uRam00000001419e8ae8;
  uStack_21c = uRam00000001419e8aec;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_228);
  local_188[0] = local_118;
  uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_2b8,1,local_188);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_1e0 = &local_200;
    local_1d8 = &local_res8;
    local_1d0 = &local_238;
    local_1c8 = &local_248;
    local_1c0 = local_118;
    local_1b8 = local_188;
    local_1b0 = &local_res10;
    puVar6 = (undefined8 *)FUN_1408174d0(&local_1e0,&local_258);
    uVar7 = uVar7 | 8;
  }
  else {
    local_1e0 = &local_1f0;
    local_1d8 = &local_res8;
    local_1d0 = &local_238;
    local_1c8 = &local_248;
    local_1c0 = local_118;
    local_1b8 = local_188;
    local_1b0 = &local_res10;
    puVar6 = (undefined8 *)FUN_140817260(&local_1e0,&local_268);
    uVar7 = uVar7 | 4;
  }
  local_res18 = uVar7;
  if (puVar6 != &local_298) {
    local_228 = *(undefined4 *)puVar6;
    uStack_224 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_220 = *(undefined4 *)(puVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_228);
  }
  if ((uVar7 & 8) != 0) {
    uVar7 = uVar7 & 0xfffffff7;
    local_res18 = uVar7;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
  }
  if (((uVar7 & 4) != 0) && ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_268);
  }
  FUN_140e87930(uVar4,DAT_141a09b28,0x80000000,&local_298);
  local_208 = 0x1b9;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57560);
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_29c = 0;
  local_2a8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a748,0x80000000,&local_2a8);
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

