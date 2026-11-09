// gml_Object_oCam_Draw_77 @ 0x140891b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCam_Draw_77(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_118;
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
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  byte local_ac;
  double local_a8;
  byte local_9c;
  double local_98;
  byte local_8c;
  double local_88;
  byte local_7c;
  double local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  double *local_50;
  double *local_48;
  double *local_40;
  double *local_38;
  double *local_30;
  
  local_60 = "gml_Object_oCam_Draw_74";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_58 = 2;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a16038);
  if (pdVar3 != &local_b8) {
    local_118 = *pdVar3;
    uStack_110 = *(undefined4 *)(pdVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
  }
  local_50 = &local_b8;
  uVar8 = CONCAT44(uVar9,DAT_141a04798);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar8,&local_50);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a16038);
    if (pdVar3 != &local_a8) {
      local_118 = *pdVar3;
      uStack_110 = *(undefined4 *)(pdVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_118);
    }
    local_48 = &local_a8;
    uVar8 = CONCAT44(uVar9,DAT_141a047b8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar8,&local_48);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_10c = 0;
    local_118 = 480.0;
    iVar2 = FUN_140e851f0(uVar4,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar2 == 0) {
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a16038);
      if (pdVar3 != &local_98) {
        local_118 = *pdVar3;
        uStack_110 = *(undefined4 *)(pdVar3 + 1);
        uStack_10c = *(undefined4 *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_118);
      }
      local_40 = &local_98;
      uVar8 = CONCAT44(uVar9,DAT_141a04548);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_40);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_10c = 0;
      local_118 = 270.0;
      iVar2 = FUN_140e851f0(uVar4,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar2 == 0) goto LAB_1408920a9;
    }
  }
  local_58 = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a16038);
  if (pdVar3 != &local_88) {
    local_118 = *pdVar3;
    uStack_110 = *(undefined4 *)(pdVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_118);
  }
  local_38 = &local_88;
  uVar8 = CONCAT44(uVar9,DAT_141a04798);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar8,&local_38);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_58 = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a16038);
    if (pdVar3 != &local_78) {
      local_118 = *pdVar3;
      uStack_110 = *(undefined4 *)(pdVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_118);
    }
    local_30 = &local_78;
    uVar4 = CONCAT44(uVar9,DAT_141a04918);
    FUN_140e634e0(param_1,param_2,&local_f8,1,uVar4,&local_30);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  local_58 = 6;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  pdVar5 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a16038);
  local_118 = (double)CONCAT44(uRam00000001419e93f4,_DAT_1419e93f0);
  uStack_110 = uRam00000001419e93f8;
  uStack_10c = uRam00000001419e93fc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_118);
  local_50 = &local_b8;
  local_118 = (double)CONCAT44(uRam00000001419e9404,_DAT_1419e9400);
  uStack_110 = uRam00000001419e9408;
  uStack_10c = uRam00000001419e940c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_118);
  local_48 = &local_a8;
  FUN_140e609c0(param_1);
  uVar4 = CONCAT44(uVar9,DAT_141a04a78);
  pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,&local_50);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pdVar6 != pdVar5) {
    local_118 = *pdVar6;
    uStack_110 = *(undefined4 *)(pdVar6 + 1);
    uStack_10c = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar5);
    }
    FUN_140041b80(pdVar5,&local_118);
  }
  FUN_140e60910(1);
LAB_1408920a9:
  local_58 = 9;
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar3;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar3);
  }
  FUN_140ec60c0((longlong)dVar7,0xffffffff);
  local_58 = 10;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_118 = (double)CONCAT44(uRam0000000141dc6bc4,_DAT_141dc6bc0);
  uStack_110 = uRam0000000141dc6bc8;
  uStack_10c = uRam0000000141dc6bcc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_118);
  local_50 = &local_b8;
  local_118 = (double)CONCAT44(uRam0000000141dc6bc4,_DAT_141dc6bc0);
  uStack_110 = uRam0000000141dc6bc8;
  uStack_10c = uRam0000000141dc6bcc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_118);
  local_48 = &local_a8;
  FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar9,DAT_141a04558),&local_50);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

