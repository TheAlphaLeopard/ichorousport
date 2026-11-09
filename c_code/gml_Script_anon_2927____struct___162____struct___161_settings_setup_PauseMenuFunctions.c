// gml_Script_anon_2927____struct___162____struct___161_settings_setup_PauseMenuFunctions @ 0x14041bbf0

undefined8 *
gml_Script_anon_2927____struct___162____struct___161_settings_setup_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148 [2];
  undefined8 *local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  
  local_170 = "gml_Script_GamePause";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x4f;
  FUN_140041df0(local_148,param_4,1,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_158 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_18c = 0xffffff;
  local_198 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f68c8);
  uVar9 = local_148[0];
  local_1ac = 0;
  local_1b8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x4f;
  puVar11 = &DAT_1419df7b0;
  if ((int)local_148[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_140;
  }
  iVar2 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_168 = 0x4f;
    if ((int)uVar9 < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_140;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 10;
    *puVar10 = 1;
  }
  local_168 = 0x50;
  uStack_1bc = 0xd;
  local_1c8 = 0;
  iVar2 = FUN_140e851f0(puVar4,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar2 == 0) {
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000f0;
    local_1a8 = 0xf0;
    uStack_1a4 = 0x1000000;
    uStack_1a0 = uStack_1c0;
    uStack_19c = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
    ppuVar13 = &local_88;
    uVar14 = CONCAT44(uVar3,DAT_141a02ef8);
    local_88 = &local_f8;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar14,ppuVar13);
    cVar1 = FUN_140e491e0(uVar7);
    if (cVar1 != '\0') goto LAB_14041c444;
    local_168 = 0x51;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_168 = 0x52;
    uStack_1bc = 0xd;
    local_1c8 = 0;
    if (&local_1c8 != puVar4) {
      local_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = uStack_1c0;
      uStack_19c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1a8);
    }
    local_168 = 0x53;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(local_158,DAT_1419ef228,0x80000000,&local_198,uVar14,uVar12);
    FUN_140e87440(&local_198,DAT_1419f4a98,0x80000000,&local_108,uVar14 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    switch(local_18c) {
    default:
switchD_14041bfe1_caseD_1:
      uVar7 = 0;
      break;
    case 6:
      uVar7 = local_198;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_198 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14041bfe1_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_198);
      uVar7 = FUN_140e87250(uVar3);
    }
    uVar14 = 0;
    puVar4 = &local_108;
    FUN_140e63610(uVar7,param_2,&local_1b8,0,puVar4,0);
    local_168 = 0x54;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_1bc = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar12 = (ulonglong)puVar4 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_118,uVar12,uVar14);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_128,uVar12,uVar14);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_141a02ee8,0x80000000,&local_138,uVar12,uVar14 & 0xffffffffffffff00)
    ;
    uVar3 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_158,gml_Script_GameUnpause,0);
    if (&local_158 != puVar6) {
      local_1a8 = (undefined4)local_158;
      uStack_1a4 = local_158._4_4_;
      uStack_1a0 = uStack_150;
      uStack_19c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    if (puVar6 != &local_f8) {
      local_1a8 = *(undefined4 *)puVar6;
      uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1a8);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (((int)local_148[0] < 1) ||
       (puVar11 = (undefined8 *)*local_140, local_88 = &local_f8, puVar11 != &local_e8)) {
      local_1a8 = *(undefined4 *)puVar11;
      uStack_1a4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_1a0 = *(undefined4 *)(puVar11 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar11 + 0xc);
      local_88 = &local_f8;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1a8);
    }
    local_80 = &local_e8;
    local_1a8 = (undefined4)local_118;
    uStack_1a4 = local_118._4_4_;
    uStack_1a0 = uStack_110;
    uStack_19c = uStack_10c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1a8);
    local_78 = local_d8;
    local_1a8 = (undefined4)local_128;
    uStack_1a4 = local_128._4_4_;
    uStack_1a0 = uStack_120;
    uStack_19c = uStack_11c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1a8);
    local_70 = local_c8;
    local_1a8 = (undefined4)local_138;
    uStack_1a4 = local_138._4_4_;
    uStack_1a0 = uStack_130;
    uStack_19c = uStack_12c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1a8);
    local_68 = local_b8;
    uStack_1bc = 0xf;
    local_1c8 = 0x1000000000000f0;
    local_1a8 = 0xf0;
    uStack_1a4 = 0x1000000;
    uStack_1a0 = uStack_1c0;
    uStack_19c = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1a8);
    local_60 = local_a8;
    uVar7 = CONCAT44(uVar3,DAT_1419fd6d8);
    puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar7,&local_88);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar8 != local_98) {
      local_1a8 = *puVar8;
      uStack_1a4 = puVar8[1];
      uStack_1a0 = puVar8[2];
      uStack_19c = puVar8[3];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_1a8);
    }
    local_58 = local_98;
    FUN_140e634e0(param_1,param_2,&local_1b8,5,CONCAT44(uVar3,DAT_141a02e88),&local_78);
    uVar9 = local_148[0];
  }
  else {
LAB_14041c444:
    uVar9 = local_148[0];
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
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
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
  if (0 < (int)uVar9) {
    uVar14 = (ulonglong)uVar9;
    puVar11 = local_140;
    do {
      puVar4 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_140e4cd60(local_140);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

