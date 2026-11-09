// gml_GlobalScript_speaker_get_profile @ 0x140511460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
gml_GlobalScript_speaker_get_profile(longlong *param_1,undefined8 param_2,undefined8 **param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  longlong local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 **local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  
  local_c0 = "gml_Script_anon@31826@SnowState@SnowState";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x403;
  _eh_vector_constructor_iterator_(&local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  iVar9 = 0;
  local_d8 = (undefined8 *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (undefined8 *)0x0;
  local_fc = 0;
  local_108 = 0;
  local_12c = 0;
  local_138 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined8 *)0x0;
  local_b8 = 0x404;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcab8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_b8 = 0x406;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    local_128 = _DAT_141dd3c68;
    puStack_120 = puRam0000000141dd3c70;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
    local_58 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_108,1,uVar3,&local_58);
    local_b8 = 0x408;
    ppuVar4 = (undefined8 **)FUN_140e8da20(&local_108,param_1,0);
    if (ppuVar4 == param_3) goto LAB_140511b9a;
    local_128 = *ppuVar4;
    puStack_120 = ppuVar4[1];
  }
  else {
    local_b8 = 0x40a;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fd8);
    uVar5 = FUN_140e63610(param_1,param_2,&local_138,0,uVar3,0);
    uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar2 = FUN_140e851f0(uVar5,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_b8 = 0x40a;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fce88);
      ppuVar4 = (undefined8 **)FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
      uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (ppuVar4 != &local_a8) {
        local_128 = *ppuVar4;
        puStack_120 = ppuVar4[1];
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_128);
      }
      local_58 = &local_a8;
      ppuVar4 = (undefined8 **)
                FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar10,DAT_1419fdca8),&local_58);
      if (ppuVar4 != param_3) {
        local_128 = *ppuVar4;
        puStack_120 = ppuVar4[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_128);
      }
      goto LAB_140511b9a;
    }
    local_b8 = 0x40b;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcc78);
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar9 = *(int *)(*plVar6 + 0x24);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = (undefined8 *)(double)iVar9;
    local_58 = &local_a8;
    if (puVar7 != &local_98) {
      local_128 = (undefined8 *)*puVar7;
      puStack_120 = (undefined8 *)puVar7[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_128);
    }
    local_50 = &local_98;
    ppuVar4 = (undefined8 **)FUN_140e79230(&local_138,2,&local_58);
    if (ppuVar4 != &local_d8) {
      local_128 = *ppuVar4;
      puStack_120 = ppuVar4[1];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_128);
    }
    local_b8 = 0x40c;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_58 = &local_d8;
    uVar3 = CONCAT44(uVar10,DAT_1419fd218);
    ppuVar4 = (undefined8 **)FUN_140e634e0(param_1,param_2,&local_138,1,uVar3,&local_58);
    uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (ppuVar4 != &local_118) {
      local_128 = *ppuVar4;
      puStack_120 = ppuVar4[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_128);
    }
    local_b8 = 0x40d;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_58 = &local_118;
    local_128 = _DAT_141dc66a0;
    puStack_120 = puRam0000000141dc66a8;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
    local_50 = &local_98;
    if (plVar6 != &local_88) {
      local_128 = (undefined8 *)*plVar6;
      puStack_120 = (undefined8 *)plVar6[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_128);
    }
    local_48 = &local_88;
    local_128 = _DAT_141dc66a0;
    puStack_120 = puRam0000000141dc66a8;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    local_40 = local_78;
    local_38 = &local_d8;
    FUN_140e634e0(param_1,param_2,&local_138,5,CONCAT44(uVar10,DAT_1419fd348),&local_58);
    local_b8 = 0x40e;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fce88);
    puVar7 = (undefined8 *)FUN_140e48e40(&local_118,0);
    FUN_140e609c0(*local_118);
    puVar8 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_138,0,uVar3,0);
    if (puVar8 != puVar7) {
      local_128 = (undefined8 *)*puVar8;
      puStack_120 = (undefined8 *)puVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_128);
    }
    FUN_140e60910(1);
    local_b8 = 0x40f;
    if (&local_118 == param_3) goto LAB_140511b9a;
    puStack_120 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
    local_128 = local_118;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_128);
LAB_140511b9a:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

