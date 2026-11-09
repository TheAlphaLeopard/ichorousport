// gml_Script_anon_36483_DefineDebuffs_OFFERINGSINIT @ 0x1403f9ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_36483_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffe40;
  undefined1 **ppuVar7;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong local_68;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_130 = "gml_Script_anon@36253@DefineDebuffs@OFFERINGSINIT";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x5e6;
  pcVar4 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x5e8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_141a1f4e0,0x80000000,&local_148,uVar5,in_stack_fffffffffffffe40);
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_148);
  if (0 < iVar2) {
    do {
      local_128 = 0x5ea;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_114 = 6;
      local_120 = local_res8;
      in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_120,DAT_1419fe0e8,0x80000000,&local_158,uVar5,in_stack_fffffffffffffe40);
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      local_104 = 6;
      local_110 = local_res8;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_110,DAT_1419fe158,0x80000000,&local_168,uVar5,
                    in_stack_fffffffffffffe40 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar5 >> 0x20);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_1b8 = (undefined4)local_158;
      uStack_1b4 = local_158._4_4_;
      uStack_1b0 = uStack_150;
      uStack_1ac = uStack_14c;
      if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1b8);
      local_48 = local_b8;
      local_1b8 = (undefined4)local_168;
      uStack_1b4 = local_168._4_4_;
      uStack_1b0 = uStack_160;
      uStack_1ac = uStack_15c;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1b8);
      local_40 = local_a8;
      local_1b8 = _DAT_141dd2878;
      uStack_1b4 = uRam0000000141dd287c;
      uStack_1b0 = uRam0000000141dd2880;
      uStack_1ac = DAT_141dd2884;
      if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1b8);
      local_38 = local_98;
      uStack_dc = 0xf;
      local_e8 = 0x100000000000136;
      local_1b8 = 0x136;
      uStack_1b4 = 0x1000000;
      uStack_1b0 = uStack_e0;
      uStack_1ac = 0xf;
      if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_1b8);
      local_30 = local_88;
      ppuVar7 = &local_48;
      uVar5 = CONCAT44(uVar6,DAT_141a0a7c8);
      puVar3 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,4,uVar5,ppuVar7);
      if (puVar3 != &local_198) {
        local_1b8 = *(undefined4 *)puVar3;
        uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_1b0 = *(undefined4 *)(puVar3 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1b8);
      }
      local_128 = 0x5eb;
      local_f4 = 6;
      local_100 = local_res8;
      in_stack_fffffffffffffe40 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_100,DAT_141a0a828,0x80000000,&local_178,uVar5,in_stack_fffffffffffffe40);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      local_1b8 = (undefined4)local_178;
      uStack_1b4 = local_178._4_4_;
      uStack_1b0 = uStack_170;
      uStack_1ac = uStack_16c;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1b8);
      FUN_140e87930(&local_198,DAT_141a1f0d0,0x80000000,&local_188);
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

