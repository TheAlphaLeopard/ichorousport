// gml_Script___InputTriggerEffectPlayer @ 0x1400dd240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputTriggerEffectPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  byte local_res8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_110 = 
  "gml_Script___SetTriggerEffect@anon@570@__InputTriggerEffectPlayer@__InputTriggerEffectPlayer";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x14;
  _eh_vector_constructor_iterator_(&local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_res8 = 0xff;
  local_7c = 0xffffff;
  uVar8 = 0;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0;
  local_128 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x16;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
  if (puVar4 != &local_c8) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_138);
  }
  local_90 = &local_c8;
  ppuVar9 = &local_90;
  puVar4 = (undefined8 *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_128,1,ppuVar9);
  uVar3 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  if (puVar4 != &local_88) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  local_108 = 0x19;
  uStack_12c = 0;
  local_138 = 0;
  iVar2 = FUN_140e851f0(&local_88,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    local_108 = 0x19;
    goto LAB_1400ddd38;
  }
  local_108 = 0x1b;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03d88);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_108 = 0x1d;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
    local_138 = CONCAT44(uRam0000000141dcb21c,_DAT_141dcb218);
    uStack_130 = uRam0000000141dcb220;
    uStack_12c = DAT_141dcb224;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_a8 = &local_f8;
    if (puVar4 != &local_e8) {
      local_138 = *puVar4;
      uStack_130 = *(undefined4 *)(puVar4 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_a0 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dcb25c,_DAT_141dcb258);
    uStack_130 = uRam0000000141dcb260;
    uStack_12c = DAT_141dcb264;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
    local_98 = &local_d8;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_128,3,&local_a8);
    local_108 = 0x1e;
    goto LAB_1400ddd38;
  }
  local_108 = 0x22;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419febe8);
  if (puVar4 != &local_f8) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  local_a8 = &local_f8;
  local_a0 = &local_88;
  uVar5 = CONCAT44(uVar3,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar5,&local_a8);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_b8) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_138);
  }
  local_108 = 0x23;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_a8 = &local_b8;
  ppuVar9 = &local_a8;
  uVar10 = CONCAT44(uVar3,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar10,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_108 = 0x25;
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    local_138 = CONCAT44(uRam0000000141dcb24c,_DAT_141dcb248);
    uStack_130 = uRam0000000141dcb250;
    uStack_12c = DAT_141dcb254;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_a0 = &local_e8;
    local_98 = &local_88;
    local_138 = CONCAT44(uRam0000000141dcb23c,_DAT_141dcb238);
    uStack_130 = uRam0000000141dcb240;
    uStack_12c = DAT_141dcb244;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_138);
    local_90 = &local_c8;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_68,3,&local_a0);
    local_108 = 0x26;
    uVar8 = local_5c;
    goto LAB_1400ddd38;
  }
  local_108 = 0x29;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03db8);
  FUN_140e87440(&local_b8,DAT_141a03d28,0x80000000,&local_58,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1400dd827:
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_f8) goto LAB_1400dd827;
  }
  local_a8 = &local_f8;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_1400dd879:
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
    if (puVar7 != &local_e8) goto LAB_1400dd879;
  }
  local_a0 = &local_e8;
  if (puVar6 != &local_d8) {
    local_138 = *puVar6;
    uStack_130 = *(undefined4 *)(puVar6 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  local_98 = &local_d8;
  local_res8 = 0xd;
  uStack_12c = 0xd;
  local_138 = 0;
  switch(local_ac) {
  default:
switchD_1400dd91b_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_b8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_b8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1400dd91b_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_b8);
    uVar5 = FUN_140e87250(uVar3);
  }
  uVar5 = FUN_140e63610(uVar5,param_2,&local_128,3,&local_58,&local_a8);
  iVar2 = FUN_140e851f0(uVar5,&local_138,DAT_141955260,0);
  uStack_6c = 0xd;
  if (iVar2 == 0) {
    local_78 = 0x3ff0000000000000;
  }
  else {
    local_78 = 0;
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_108 = 0x2b;
  if (param_4 < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[2];
  }
  cVar1 = FUN_140e491e0(puVar6);
  if (cVar1 == '\0') {
    local_108 = 0x2b;
    local_res8 = 0xd;
  }
  else {
    local_108 = 0x2d;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_12c = 0;
    local_138 = 0x40e000e000000000;
    iVar2 = FUN_140e851f0(puVar6,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar2 == 0) {
      local_108 = 0x2f;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03de8);
      FUN_140e609c0(param_1);
      if (&local_78 != puVar6) {
        local_138 = local_78;
        uStack_130 = uStack_70;
        uStack_12c = uStack_6c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_138);
      }
      FUN_140e60910(1);
      local_108 = 0x30;
      uVar3 = DAT_141a03e08;
    }
    else {
      local_108 = 0x32;
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*param_5;
      }
      uStack_12c = 0;
      local_138 = 0x40e0010000000000;
      iVar2 = FUN_140e851f0(puVar6,&local_138,DAT_141955260,0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar2 != 0) {
        local_108 = 0x39;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        local_138 = CONCAT44(uRam0000000141dcb20c,_DAT_141dcb208);
        uStack_130 = uRam0000000141dcb210;
        uStack_12c = DAT_141dcb214;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_138);
        local_a8 = &local_f8;
        if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_e8)) {
          local_138 = *puVar4;
          uStack_130 = *(undefined4 *)(puVar4 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_138);
        }
        local_a0 = &local_e8;
        local_138 = CONCAT44(uRam0000000141dcb22c,_DAT_141dcb228);
        uStack_130 = uRam0000000141dcb230;
        uStack_12c = DAT_141dcb234;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_138);
        local_98 = &local_d8;
        gml_Script_InputPlugInExists(param_1,param_2,&local_128,3,&local_a8);
        local_108 = 0x3a;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = 0;
        goto LAB_1400ddd38;
      }
      local_108 = 0x34;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d98);
      FUN_140e609c0(param_1);
      if (&local_78 != puVar6) {
        local_138 = local_78;
        uStack_130 = uStack_70;
        uStack_12c = uStack_6c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_138);
      }
      FUN_140e60910(1);
      local_108 = 0x35;
      uVar3 = DAT_141a03d78;
    }
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    FUN_140e609c0(param_1);
    if (1 < param_4) {
      puVar4 = (undefined8 *)param_5[1];
    }
    if (puVar4 != puVar6) {
      local_138 = *puVar4;
      uStack_130 = *(undefined4 *)(puVar4 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_138);
    }
    FUN_140e60910(1);
  }
LAB_1400ddd38:
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << (local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

