// gml_Script_anon_42648_DefineDebuffs_OFFERINGSINIT @ 0x1404026c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_42648_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar9;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_e0 = "gml_Script_anon@41859@DefineDebuffs@OFFERINGSINIT";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x6c9;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x6cb;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_108,uVar7,in_stack_fffffffffffffed0);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a57c50,0x80000000,&local_f8,uVar7,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  uStack_11c = 10;
  local_128 = 2;
  iVar2 = FUN_140e851f0(&local_f8,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_d8 = 0x6cd;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_128 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_120 = uRam0000000141dc6558;
    uStack_11c = uRam0000000141dc655c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_128);
    local_78 = local_c8;
    local_128 = CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
    uStack_120 = uRam0000000141dc6558;
    uStack_11c = uRam0000000141dc655c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_128);
    local_70 = local_b8;
    local_128 = CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
    uStack_120 = uRam0000000141dd2880;
    uStack_11c = DAT_141dd2884;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_128);
    local_68 = local_a8;
    uStack_11c = 0xf;
    local_128 = 0x1000000000000c5;
    local_88 = 0xc5;
    uStack_84 = 0x1000000;
    uStack_80 = uStack_120;
    uStack_7c = 0xf;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_88);
    local_60 = local_98;
    ppuVar9 = &local_78;
    uVar7 = CONCAT44(uVar8,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_118,4,uVar7,ppuVar9);
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_d8 = 0x6cf;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
        if (param_4 < 2) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = *(undefined8 **)(param_5 + 8);
        }
        ppuVar9 = (undefined1 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_108,uVar7,ppuVar9);
        FUN_140e609c0(local_res8);
        if (&local_108 != puVar4) {
          local_88 = (undefined4)local_108;
          uStack_84 = local_108._4_4_;
          uStack_80 = uStack_100;
          uStack_7c = uStack_fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_88);
        }
        FUN_140e60910(1);
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_58,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    FUN_140e87440(&local_108,DAT_141a57c50,0x80000000,&local_f8,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_48 != 0) {
      FUN_140e4cd60();
      local_48 = 0;
    }
  }
  else {
    local_d8 = 0x6cb;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

