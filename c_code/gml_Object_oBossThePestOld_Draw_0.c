// gml_Object_oBossThePestOld_Draw_0 @ 0x1408404c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossThePestOld_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  code *pcVar13;
  ulonglong in_stack_fffffffffffffde0;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 *local_208;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  undefined4 local_1cc;
  ulonglong local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  ulonglong local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined4 local_148 [4];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined4 local_84;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  local_f0 = "gml_Script_anon@736@gml_Object_oBossThePestOld_Other_76";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x22;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_198,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_68 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x23;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0x4008000000000000;
  local_e8 = 0x24;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0x4034000000000000;
  local_e8 = 0x26;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe978);
  uStack_1fc = 0;
  local_208 = (undefined1 *)0x4056800000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_208,DAT_141955260,1);
  bVar9 = iVar3 != -2 && iVar3 < 0;
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar3 == -2 || iVar3 >= 0) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe978);
    uStack_1fc = 0;
    local_208 = (undefined1 *)0x4070e00000000000;
    iVar3 = FUN_140e851f0(uVar4,&local_208,DAT_141955260,1);
    if (iVar3 != -2) {
      bVar9 = 0 < iVar3;
    }
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (!bVar9) {
      uStack_1fc = 0;
      local_208 = &DAT_bff0000000000000;
      ppuVar5 = &local_208;
      bVar1 = false;
      bVar9 = true;
      goto LAB_14084074a;
    }
  }
  uStack_1dc = 0;
  local_1e8 = (undefined1 *)0x3ff0000000000000;
  ppuVar5 = (undefined1 **)&local_1e8;
  bVar1 = true;
  bVar9 = false;
LAB_14084074a:
  uVar10 = uStack_1dc;
  uVar2 = uStack_1fc;
  local_78 = *ppuVar5;
  uStack_70 = *(undefined4 *)(ppuVar5 + 1);
  uStack_6c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_78);
  if ((bVar9) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if ((bVar1) && ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    local_e8 = 0x29;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe978);
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
    local_84 = 6;
    in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar13 & 0xffffffffffffff00;
    local_90 = param_1;
    FUN_140e87440(&local_90,DAT_1419fe0e8,0x80000000,&local_118,uVar12,in_stack_fffffffffffffde0);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    local_1cc = 6;
    in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_128,uVar12 & 0xffffffffffffff00,
                  in_stack_fffffffffffffde0);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_218 = (undefined4)local_118;
    uStack_214 = local_118._4_4_;
    uStack_210 = uStack_110;
    uStack_20c = uStack_10c;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_218);
    local_c8 = &local_198;
    local_218 = (undefined4)local_128;
    uStack_214 = local_128._4_4_;
    uStack_210 = uStack_120;
    uStack_20c = uStack_11c;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_218);
    local_c0 = local_188;
    uStack_6c = 0xf;
    local_78 = (undefined1 *)0x1000000000000e1;
    local_218 = 0xe1;
    uStack_214 = 0x1000000;
    uStack_210 = uStack_70;
    uStack_20c = 0xf;
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_218);
    local_b8 = local_178;
    if ((local_1bc & 0xffffff) == 0) {
      uVar10 = (undefined4)local_1c8;
      uVar12 = local_1c8;
    }
    else {
      uVar12 = FUN_140e4b060();
      uVar10 = (undefined4)local_1c8;
    }
    uVar11 = (undefined4)uVar12;
    uStack_1fc = 0;
    local_208 = (undefined1 *)(uVar12 ^ 0x8000000000000000);
    if ((local_1bc & 0xffffff) != 0) {
      uVar10 = FUN_140e4b060(&local_1c8);
      uVar11 = SUB84(local_208,0);
    }
    if ((uStack_1fc & 0xffffff) != 0) {
      uVar11 = FUN_140e4b060(&local_208);
    }
    uVar10 = FUN_140e794b0(uVar11,uVar10);
    uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_1e0 = (undefined4)puVar6[1];
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = (undefined1 *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar6);
    }
    FUN_140162c50(&local_1e8,uVar10);
    local_218 = (undefined4)local_1e8;
    uStack_214 = local_1e8._4_4_;
    uStack_210 = uStack_1e0;
    uStack_20c = uStack_1dc;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_218);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_b0 = local_168;
    local_a8 = &local_1a8;
    if (puVar7 != local_148) {
      local_218 = *puVar7;
      uStack_214 = puVar7[1];
      uStack_210 = puVar7[2];
      uStack_20c = puVar7[3];
      if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_218);
    }
    local_218 = (undefined4)DAT_1419df7b0;
    uStack_214 = DAT_1419df7b0._4_4_;
    uStack_210 = DAT_1419df7b8;
    uStack_20c = DAT_1419df7bc;
    local_a0 = local_148;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_218);
    local_98 = local_138;
    pcVar13 = (code *)&local_c8;
    FUN_140265f80(param_1,param_2,&local_1f8,7,pcVar13);
  } while (0 < iVar3);
  local_e8 = 0x2d;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe978);
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(local_68,DAT_141a1f210,0x80000000,&local_d8,uVar12,in_stack_fffffffffffffde0);
  local_1cc = 6;
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_118,uVar12,in_stack_fffffffffffffde0);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_128,uVar12,
                in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_218 = (undefined4)local_118;
  uStack_214 = local_118._4_4_;
  uStack_210 = uStack_110;
  uStack_20c = uStack_10c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_218);
  local_c8 = &local_198;
  local_218 = (undefined4)local_128;
  uStack_214 = local_128._4_4_;
  uStack_210 = uStack_120;
  uStack_20c = uStack_11c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_218);
  local_c0 = local_188;
  uStack_1fc = 0;
  local_208 = (undefined1 *)0x4046800000000000;
  FUN_140042560(&local_208,&local_108);
  uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1e0 = (undefined4)puVar6[1];
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = (undefined1 *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar6);
  }
  FUN_1400460e0(&local_1e8,&local_208);
  local_218 = (undefined4)local_1e8;
  uStack_214 = local_1e8._4_4_;
  uStack_210 = uStack_1e0;
  uStack_20c = uStack_1dc;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_218);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_b8 = local_178;
  local_218 = (undefined4)local_d8;
  uStack_214 = local_d8._4_4_;
  uStack_210 = uStack_d0;
  uStack_20c = uStack_cc;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_218);
  local_b0 = local_168;
  puVar7 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_1b8,3,CONCAT44(uVar10,DAT_1419fdca8),&local_c8);
  if (puVar7 != local_158) {
    local_218 = *puVar7;
    uStack_214 = puVar7[1];
    uStack_210 = puVar7[2];
    uStack_20c = puVar7[3];
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_218);
  }
  local_a8 = (undefined8 *)local_158;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_1f8,2,&local_b0);
  local_e8 = 0x2f;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe978);
  FUN_140162d40(puVar7,0xb4);
  local_e8 = 0x30;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if (puVar6 != &local_198) {
    local_218 = (undefined4)*puVar6;
    uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_210 = (undefined4)puVar6[1];
    uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_218);
  }
  local_c8 = &local_198;
  local_218 = _DAT_141dc6a60;
  uStack_214 = uRam0000000141dc6a64;
  uStack_210 = uRam0000000141dc6a68;
  uStack_20c = uRam0000000141dc6a6c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_218);
  local_c0 = local_188;
  local_218 = _DAT_1419e8df0;
  uStack_214 = uRam00000001419e8df4;
  uStack_210 = uRam00000001419e8df8;
  uStack_20c = uRam00000001419e8dfc;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_218);
  local_b8 = local_178;
  FUN_140e609c0(param_1);
  puVar8 = (undefined4 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_1f8,3,&local_c8);
  if (puVar8 != puVar7) {
    local_218 = *puVar8;
    uStack_214 = puVar8[1];
    uStack_210 = puVar8[2];
    uStack_20c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_218);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

