// gml_GlobalScript___InputOnOperaGXMobile @ 0x1400bbe90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputOnOperaGXMobile(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_40 = "gml_Script_anon@376@__InputMotionSystem@__InputMotionSystem";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xf;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x11;
  uVar2 = gml_Script_InputMouseCheck(param_1,param_2,&local_b8,0,0);
  cVar1 = FUN_140e491e0(uVar2);
  uVar3 = 0;
  if (cVar1 != '\0') {
    local_38 = 0x15;
    local_58 = 0;
    local_50 = 0;
    local_4c = 5;
    local_a8 = _DAT_1419e18e0;
    uStack_a4 = uRam00000001419e18e4;
    uStack_a0 = uRam00000001419e18e8;
    uStack_9c = uRam00000001419e18ec;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
    local_30 = local_88;
    local_a8 = (undefined4)DAT_1419df7b0;
    uStack_a4 = DAT_1419df7b0._4_4_;
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_a8);
    local_28 = local_78;
    FUN_140e645a0(&local_a8,
                  gml_Script_anon_1821_anon_1741_anon_376___InputMotionSystem___InputMotionSystem,
                  param_1);
    local_98 = local_a8;
    uStack_94 = uStack_a4;
    uStack_90 = uStack_a0;
    uStack_8c = uStack_9c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_98);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_20 = local_68;
    gml_Script_InputPlugInVerbSet(param_1,param_2,&local_58,3,&local_30);
    local_38 = 0x1c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_98 = _DAT_1419e18d0;
    uStack_94 = uRam00000001419e18d4;
    uStack_90 = uRam00000001419e18d8;
    uStack_8c = uRam00000001419e18dc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_98);
    local_98 = (undefined4)DAT_1419df7b0;
    uStack_94 = DAT_1419df7b0._4_4_;
    uStack_90 = DAT_1419df7b8;
    uStack_8c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_98);
    FUN_140e645a0(&local_a8,gml_Script_anon_1741_anon_376___InputMotionSystem___InputMotionSystem,
                  param_1);
    local_98 = local_a8;
    uStack_94 = uStack_a4;
    uStack_90 = uStack_a0;
    uStack_8c = uStack_9c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_98);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    gml_Script_InputPlugInVerbSet(param_1,param_2,&local_b8,3,&local_30);
    local_38 = 0x2e;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_98 = _DAT_1419e1900;
    uStack_94 = uRam00000001419e1904;
    uStack_90 = uRam00000001419e1908;
    uStack_8c = uRam00000001419e190c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_98);
    local_98 = (undefined4)DAT_1419df7b0;
    uStack_94 = DAT_1419df7b0._4_4_;
    uStack_90 = DAT_1419df7b8;
    uStack_8c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_98);
    FUN_140e645a0(&local_a8,gml_Script___InputMotionSystem,param_1);
    local_98 = local_a8;
    uStack_94 = uStack_a4;
    uStack_90 = uStack_a0;
    uStack_8c = uStack_9c;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_98);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    gml_Script_InputPlugInVerbSet(param_1,param_2,&local_b8,3,&local_30);
    uVar3 = local_4c;
  }
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

