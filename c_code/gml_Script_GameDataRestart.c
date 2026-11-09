// gml_Script_GameDataRestart @ 0x1402859a0

longlong *
gml_Script_GameDataRestart
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  double dVar8;
  uint uVar10;
  code *pcVar11;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  double *local_a8;
  undefined8 local_a0 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  local_c0 = "gml_Script_gamepad_check_input";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 1;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 5;
  local_ec = 0;
  uVar7 = 0;
  uVar9 = 0x40e00020;
  local_f8 = 32769.0;
  bVar1 = true;
  uVar10 = 0x3ff00000;
  do {
    dVar8 = (double)CONCAT44(uVar9,uVar7);
    if (!bVar1) {
      local_b8 = 5;
      uVar3 = local_ec & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_f8 = (double)((longlong)local_f8 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140285ad7;
            FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
          }
          goto LAB_140285ae6;
        }
        dVar8 = (double)FUN_140e4b060(&local_f8);
LAB_140285ad7:
        local_ec = 0;
      }
      local_f8 = dVar8 + 1.0;
    }
LAB_140285ae6:
    bVar1 = false;
    local_cc = 0;
    local_d8 = 0x40e0020000000000;
    iVar4 = FUN_140e851f0(&local_f8,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar7 = (undefined4)((ulonglong)pcVar11 >> 0x20);
    if (iVar4 == -2 || 0 < iVar4) {
      local_b8 = 9;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      uVar7 = 0;
      uVar9 = 0x40e00220;
      local_f8 = 32785.0;
      bVar1 = true;
      break;
    }
    local_b8 = 6;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140285b88:
      local_80 = *(undefined4 *)puVar5;
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_78 = *(undefined4 *)(puVar5 + 1);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_a0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a0);
      }
      FUN_140041b80(local_a0,&local_80);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != local_a0) goto LAB_140285b88;
    }
    local_b0 = local_a0;
    local_a8 = &local_f8;
    pcVar11 = (code *)CONCAT44(uVar7,DAT_141a44ad8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,2,pcVar11,&local_b0);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') goto LAB_140285c09;
    uVar7 = SUB84(local_f8,0);
    uVar9 = (undefined4)((ulonglong)local_f8 >> 0x20);
  } while( true );
LAB_140285c60:
  dVar8 = (double)CONCAT44(uVar9,uVar7);
  uVar7 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  if (!bVar1) {
    local_b8 = 9;
    uVar3 = local_ec & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 7) {
          local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_f8 = (double)((longlong)local_f8 + 1);
        }
        else {
          if (uVar3 == 0xd) goto LAB_140285cb6;
          FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
        }
        goto LAB_140285cc5;
      }
      dVar8 = (double)FUN_140e4b060(&local_f8);
LAB_140285cb6:
      local_ec = 0;
    }
    local_f8 = dVar8 + 1.0;
  }
LAB_140285cc5:
  bVar1 = false;
  local_cc = 0;
  local_d8 = 0x40e0028000000000;
  iVar4 = FUN_140e851f0(&local_f8,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar4 == -2 || 0 < iVar4) {
    local_b8 = 0xd;
    uVar10 = 0;
    goto LAB_140285e12;
  }
  local_b8 = 10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140285d67:
    local_80 = *(undefined4 *)puVar5;
    uStack_7c = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_78 = *(undefined4 *)(puVar5 + 1);
    uStack_74 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_a0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a0);
    }
    FUN_140041b80(local_a0,&local_80);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != local_a0) goto LAB_140285d67;
  }
  local_b0 = local_a0;
  local_a8 = &local_f8;
  pcVar11 = (code *)CONCAT44(uVar7,DAT_141a01cf8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,pcVar11,&local_b0);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar5;
  }
  else {
    uVar7 = FUN_140e4b060(puVar5);
  }
  dVar8 = (double)FUN_140e78d00(uVar7);
  if (0.5 < dVar8) goto LAB_140285dfe;
  uVar7 = SUB84(local_f8,0);
  uVar9 = (undefined4)((ulonglong)local_f8 >> 0x20);
  goto LAB_140285c60;
LAB_140285dfe:
  local_b8 = 10;
  goto LAB_140285e12;
LAB_140285c09:
  local_b8 = 6;
LAB_140285e12:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar10 << 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

