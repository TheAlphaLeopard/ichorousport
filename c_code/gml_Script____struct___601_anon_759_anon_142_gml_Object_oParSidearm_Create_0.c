// gml_Script____struct___601_anon_759_anon_142_gml_Object_oParSidearm_Create_0 @ 0x140bbae40

void gml_Script____struct___601_anon_759_anon_142_gml_Object_oParSidearm_Create_0
               (longlong *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  ulonglong local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  ulonglong *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oParPickup_Draw_73";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  _eh_vector_constructor_iterator_(&local_108,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_38 = 3;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
  ppuVar8 = (undefined8 **)0x0;
  uVar3 = FUN_140e63610(param_1,param_2,&local_118,0,uVar2,0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_38 = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_68);
    local_158 = local_68;
    uStack_150 = uStack_60;
    uStack_14c = uStack_5c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_e8 = &local_108;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419eed38,0x80000000,&local_a8,uVar2,uVar9);
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419eedf8,0x80000000,&local_b8,uVar2,uVar9 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar2 >> 0x20);
    uStack_12c = local_ac;
    uStack_130 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_138 = local_b8;
    }
    else {
      FUN_1400419b0(&local_138,&local_b8);
    }
    uStack_14c = 0;
    local_158 = 0x4000000000000000;
    FUN_140046500(&local_138,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_13c = local_9c;
    local_140 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_148 = local_a8;
    }
    else {
      FUN_1400419b0(&local_148,&local_a8);
    }
    uStack_14c = 7;
    local_158 = CONCAT44(local_158._4_4_,0x40);
    FUN_1400462a0(&local_148,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_8c = local_13c;
    uStack_90 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_98 = local_148;
    }
    else {
      FUN_1400419b0(&local_98,&local_148);
    }
    FUN_1400460e0(&local_98,&local_138);
    local_158 = local_98;
    uStack_150 = uStack_90;
    uStack_14c = uStack_8c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_e0 = local_f8;
    uVar6 = CONCAT44(uVar7,DAT_1419fe728);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,&local_e0);
    ppuVar8 = &local_e8;
    uVar2 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),DAT_141a00e38);
    puVar5 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar2,ppuVar8);
    local_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_140 = (undefined4)puVar5[1];
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_148,puVar5);
    }
    FUN_1400460e0(&local_148,uVar3);
    uStack_12c = local_13c;
    uStack_130 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_138 = local_148;
    }
    else {
      FUN_1400419b0(&local_138,&local_148);
    }
    uStack_14c = 7;
    local_158 = CONCAT44(local_158._4_4_,8);
    FUN_1400462a0(&local_138,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_158);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86c30(uVar4,DAT_1419fe0e8,0x80000000,&local_78);
    local_38 = 6;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_68);
    local_158 = local_68;
    uStack_150 = uStack_60;
    uStack_14c = uStack_5c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_e8 = &local_108;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419eed78,0x80000000,&local_c8,uVar2,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar2 >> 0x20);
    uStack_12c = local_bc;
    uStack_130 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_138 = local_c8;
    }
    else {
      FUN_1400419b0(&local_138,&local_c8);
    }
    uStack_14c = 7;
    local_158 = local_158 & 0xffffffff00000000;
    FUN_1400462a0(&local_138,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_e0 = local_f8;
    uVar6 = CONCAT44(uVar7,DAT_1419fe728);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar6,&local_e0);
    ppuVar8 = &local_e8;
    uVar2 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),DAT_141a00dd8);
    puVar5 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar2,ppuVar8);
    local_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_140 = (undefined4)puVar5[1];
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_148,puVar5);
    }
    FUN_1400460e0(&local_148,uVar3);
    uStack_12c = local_13c;
    uStack_130 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_138 = local_148;
    }
    else {
      FUN_1400419b0(&local_138,&local_148);
    }
    uStack_14c = 7;
    local_158 = CONCAT44(local_158._4_4_,0xc);
    FUN_1400462a0(&local_138,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_88);
  }
  local_38 = 9;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
  FUN_140e87440(uVar3,DAT_141a05028,0x80000000,&local_58,uVar2 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  puVar5 = (ulonglong *)FUN_140e63610(param_1,param_2,&local_128,0,uVar4,0);
  if (puVar5 != &local_108) {
    local_158 = *puVar5;
    uStack_150 = (undefined4)puVar5[1];
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_e8 = &local_108;
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_118,1,&local_58,&local_e8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

