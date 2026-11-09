// gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT @ 0x140235b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_147_DefineBossAttributes_BOSSMODSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_140 = "gml_Script_get_blood_col";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x23;
  FUN_140041df0(local_38,param_4,1,param_5);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1d980);
  uStack_15c = 0xffffff;
  local_168 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1db10);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x23;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_30;
  }
  iVar1 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_138 = 0x23;
    if ((int)local_38[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_30;
    }
    if (puVar2 != puVar7) {
      local_158 = *(undefined4 *)puVar2;
      uStack_154 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_150 = *(undefined4 *)(puVar2 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_158);
    }
  }
  local_138 = 0x25;
  local_158 = _DAT_141dcde48;
  uStack_154 = uRam0000000141dcde4c;
  uStack_150 = uRam0000000141dcde50;
  uStack_14c = DAT_141dcde54;
  FUN_140041b80(&local_168,&local_158);
  local_138 = 0x26;
  if (0 < (int)local_38[0]) {
    puVar5 = (undefined8 *)*local_30;
  }
  local_c4 = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_c8 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
    local_d0 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_d0,puVar5);
  }
  FUN_140e87440(uVar3,DAT_141a1dbd0,0x80000000,&local_e0,0,0);
  FUN_140e87440(uVar3,DAT_141a1dbb0,0x80000000,&local_f0,0,0);
  FUN_140e87440(uVar3,DAT_141a1dca0,0x80000000,&local_100,0,0);
  FUN_140e87440(uVar3,DAT_141a1dc20,0x80000000,&local_110,0,0);
  FUN_140e87440(uVar3,DAT_141a1ddb0,0x80000000,&local_120,0,0);
  FUN_140e87440(uVar3,DAT_141a1d930,0x80000000,&local_130,0,0);
  local_ac = local_d4;
  local_b0 = local_d8;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
    local_b8 = local_e0;
  }
  else {
    FUN_1400419b0(&local_b8,&local_e0);
  }
  local_a8 = 0;
  local_98 = local_e4;
  local_9c = local_e8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_a4 = local_f0;
  }
  else {
    FUN_1400419b0(&local_a4,&local_f0);
  }
  local_94 = 1;
  local_84 = local_f4;
  local_88 = local_f8;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
    local_90 = local_100;
  }
  else {
    FUN_1400419b0(&local_90,&local_100);
  }
  local_80 = 2;
  local_70 = local_104;
  local_74 = local_108;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
    local_7c = local_110;
  }
  else {
    FUN_1400419b0(&local_7c,&local_110);
  }
  local_6c = 3;
  local_5c = local_114;
  local_60 = local_118;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) == 0) {
    local_68 = local_120;
  }
  else {
    FUN_1400419b0(&local_68,&local_120);
  }
  local_58 = 4;
  local_48 = local_124;
  local_4c = local_128;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
    local_54 = local_130;
  }
  else {
    FUN_1400419b0(&local_54,&local_130);
  }
  local_44 = 5;
  uVar4 = 0;
LAB_140235f30:
  iVar1 = FUN_140e851f0(local_38 + (longlong)(int)uVar4 * 5 + -0x20,&local_d0,DAT_141955260,0);
  if (iVar1 != 0) goto code_r0x000140235f57;
  switch(local_38[(longlong)(int)uVar4 * 5 + -0x1c]) {
  case 0:
    local_138 = 0x29;
    goto LAB_140235fde;
  case 1:
    local_138 = 0x2d;
    local_158 = _DAT_141dcde18;
    uStack_154 = uRam0000000141dcde1c;
    uStack_150 = uRam0000000141dcde20;
    uStack_14c = DAT_141dcde24;
    break;
  case 2:
    local_138 = 0x31;
    local_158 = _DAT_141dcde38;
    uStack_154 = uRam0000000141dcde3c;
    uStack_150 = uRam0000000141dcde40;
    uStack_14c = DAT_141dcde44;
    break;
  case 3:
    local_138 = 0x35;
    local_158 = _DAT_141dcddf8;
    uStack_154 = uRam0000000141dcddfc;
    uStack_150 = uRam0000000141dcde00;
    uStack_14c = DAT_141dcde04;
    break;
  case 4:
    local_138 = 0x39;
    local_158 = _DAT_141dcde08;
    uStack_154 = uRam0000000141dcde0c;
    uStack_150 = uRam0000000141dcde10;
    uStack_14c = DAT_141dcde14;
    break;
  case 5:
    local_138 = 0x3d;
LAB_140235fde:
    local_158 = _DAT_141dcde48;
    uStack_154 = uRam0000000141dcde4c;
    uStack_150 = uRam0000000141dcde50;
    uStack_14c = DAT_141dcde54;
    break;
  default:
    goto switchD_140235f86_default;
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_158);
  goto switchD_140235f86_default;
code_r0x000140235f57:
  uVar4 = uVar4 + 1;
  if (5 < uVar4) {
switchD_140235f86_default:
    local_138 = 0x42;
    if (&local_168 != param_3) {
      local_158 = (undefined4)local_168;
      uStack_154 = local_168._4_4_;
      uStack_150 = uStack_160;
      uStack_14c = uStack_15c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_158);
    }
    _eh_vector_destructor_iterator_(&local_b8,0x14,6,FUN_1400662d0);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (0 < (int)local_38[0]) {
      puVar5 = local_30;
      do {
        puVar2 = (undefined8 *)*puVar5;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar2);
        }
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    FUN_140e4cd60(local_30);
    DAT_141dc7a50 = (undefined8 *)local_148;
    return param_3;
  }
  goto LAB_140235f30;
}

