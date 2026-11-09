// gml_Script_anon_42120_DefineDebuffs_OFFERINGSINIT @ 0x140401f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_42120_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *local_res8;
  ulonglong local_res10;
  code *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar12;
  undefined1 **ppuVar11;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_130 = "gml_Script_anon@41456@DefineDebuffs@OFFERINGSINIT";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x6b5;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x6b7;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_1c8,uVar9,in_stack_fffffffffffffe30);
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_141a57c50,0x80000000,&local_148,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffe30);
  uStack_1ac = 10;
  local_1b8 = 0;
  iVar2 = FUN_140e851f0(&local_148,&local_1b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar2 == 0) {
    local_128 = 0x6b7;
  }
  else {
    local_128 = 0x6b9;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_118 = CONCAT44(uRam00000001419e4744,_DAT_1419e4740);
    uStack_110 = uRam00000001419e4748;
    uStack_10c = uRam00000001419e474c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_118);
    local_b8 = local_108;
    ppuVar11 = &local_b8;
    uVar4 = gml_Script_choose_weighted(local_res8,local_res10,&local_198,1,ppuVar11);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      iVar2 = 2;
      do {
        iVar2 = iVar2 + -1;
        local_128 = 0x6bd;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        if (param_4 < 2) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = *(undefined8 **)(param_5 + 8);
        }
        FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_1c8,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00,
                      in_stack_fffffffffffffe30 & 0xffffffffffffff00);
        plVar10 = local_res8;
        uVar9 = local_res10;
        FUN_140e87170(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
        if (param_4 < 2) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = *(undefined8 **)(param_5 + 8);
        }
        FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_1c8,
                      (ulonglong)plVar10 & 0xffffffffffffff00,uVar9 & 0xffffffffffffff00);
        plVar10 = local_res8;
        FUN_140e87170(&local_1c8,DAT_1419fe158,0x80000000,&local_178,local_res8,local_res10);
        uVar12 = (undefined4)((ulonglong)plVar10 >> 0x20);
        uVar7 = FUN_140e794b0(0,0);
        uStack_14c = local_15c;
        uStack_150 = local_160;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
          local_158 = local_168;
        }
        else {
          FUN_1400419b0(&local_158,&local_168);
        }
        FUN_140162c50(&local_158,uVar7);
        local_188 = (undefined4)local_158;
        uStack_184 = local_158._4_4_;
        uStack_180 = uStack_150;
        uStack_17c = uStack_14c;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_188);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_b0 = local_f8;
        uVar7 = FUN_140e794b0(0,0);
        uStack_1ac = local_16c;
        uStack_1b0 = local_170;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
          local_1b8 = local_178;
        }
        else {
          FUN_1400419b0(&local_1b8,&local_178);
        }
        FUN_140162c50(&local_1b8,uVar7);
        local_188 = (undefined4)local_1b8;
        uStack_184 = local_1b8._4_4_;
        uStack_180 = uStack_1b0;
        uStack_17c = uStack_1ac;
        if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_188);
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_a8 = local_e8;
        local_188 = _DAT_141dd2678;
        uStack_184 = uRam0000000141dd267c;
        uStack_180 = uRam0000000141dd2680;
        uStack_17c = DAT_141dd2684;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_188);
        local_a0 = local_d8;
        uStack_10c = 0xf;
        local_118 = 0x100000000000096;
        local_188 = 0x96;
        uStack_184 = 0x1000000;
        uStack_180 = uStack_110;
        uStack_17c = 0xf;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_188);
        local_98 = local_c8;
        ppuVar11 = &local_b0;
        uVar9 = CONCAT44(uVar12,DAT_141a0a7c8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,uVar9,ppuVar11);
        iVar3 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar4);
        if (0 < iVar3) {
          do {
            local_128 = 0x6bf;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
            if (param_4 < 2) {
              puVar6 = &DAT_1419df7b0;
            }
            else {
              puVar6 = *(undefined8 **)(param_5 + 8);
            }
            ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
            uVar9 = uVar9 & 0xffffffffffffff00;
            FUN_140e87440(puVar6,DAT_141a1f440,0x80000000,&local_1c8,uVar9,ppuVar11);
            FUN_140e609c0(local_res8);
            if (&local_1c8 != puVar5) {
              local_188 = (undefined4)local_1c8;
              uStack_184 = local_1c8._4_4_;
              uStack_180 = uStack_1c0;
              uStack_17c = uStack_1bc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              FUN_140041b80(puVar5,&local_188);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_90,&local_res8,&local_res10);
        DAT_141a67c38 = 1;
        in_stack_fffffffffffffe30 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        ppuVar11 = (undefined1 **)(uVar9 & 0xffffffffffffff00);
        FUN_140e87440(&local_1c8,DAT_141a57c50,0x80000000,&local_148,ppuVar11,
                      in_stack_fffffffffffffe30);
        DAT_141a67c38 = 0;
        DAT_141a72aac = 0;
        if (local_80 != 0) {
          FUN_140e4cd60();
        }
      } while (0 < iVar2);
    }
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

