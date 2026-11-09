// gml_Script_anon_9384_DefineBuffs_OFFERINGSINIT @ 0x1403c7930

undefined8 *
gml_Script_anon_9384_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar6;
  undefined8 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [48];
  
  local_c0 = "gml_Script_anon@7399@DefineBuffs@OFFERINGSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x116;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x118;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (undefined8 *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  uStack_12c = 7;
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,7);
  FUN_140042560(&local_128,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = local_128;
  uStack_130 = uStack_120;
  uStack_12c = uStack_11c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_138);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_b8 = 0x11a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_138 = &local_d8;
  ppuVar6 = &local_138;
  uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_118,1,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_b8 = 0x11a;
  }
  else {
    local_b8 = 0x11b;
    if (1 < param_4) {
      puVar5 = (undefined8 *)param_5[1];
    }
    FUN_140e87440(puVar5,DAT_1419f5e78,0x80000000,&local_b0,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  0);
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_b0);
    if (0 < iVar2) {
      do {
        local_b8 = 0x11d;
        uStack_12c = 0xf;
        local_138 = (undefined8 *)0x10000010000005d;
        local_98 = 0x5d;
        uStack_94 = 0x1000001;
        uStack_90 = uStack_130;
        uStack_8c = 0xf;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_98);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_e8);
        local_b8 = 0x11e;
        uStack_11c = 0xf;
        local_128 = (undefined8 *)0x10000010000005d;
        local_98 = 0x5d;
        uStack_94 = 0x1000001;
        uStack_90 = uStack_120;
        uStack_8c = 0xf;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_98);
        FUN_140e86fa0(local_res8,DAT_1419f5c58,0x80000000,&local_f8);
        local_b8 = 0x11f;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_108);
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

