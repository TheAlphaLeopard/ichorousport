// gml_Script_anon_5819_gml_Object_oBloodDropManager_Create_0 @ 0x1406b4c10

undefined8 *
gml_Script_anon_5819_gml_Object_oBloodDropManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_b0 = "gml_Script_anon@621@gml_Object_oBloodDropManager_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xb;
  FUN_140041df0(local_60,param_4,5,param_5);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de12f8) &&
     (_Init_thread_header(&DAT_141de12f8), DAT_141de12f8 == -1)) {
    DAT_141de12e8 = (longlong *)FUN_140e63aa0(DAT_141a032a8);
    _Init_thread_footer(&DAT_141de12f8);
  }
  local_a8 = 0xb;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[4];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0xb;
    if ((int)local_60[0] < 5) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0xc010000000000000;
  }
  if (DAT_141ddc1aa == '\0') {
    FUN_140e64380(DAT_141de12e8,"gml_Script_anon@621@gml_Object_oBloodDropManager_Create_0");
    FUN_140e64380(param_1,"gml_Script_anon@621@gml_Object_oBloodDropManager_Create_0");
  }
  FUN_140e643a0(param_1,DAT_141de12e8);
  local_a8 = 0x27;
  if (DAT_141ddc1aa == '\0') {
    DAT_141ddc1aa = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a0a968);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,FUN_1406ab1f0,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a05028);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,
                  gml_Script__instance_place_anon_4336_anon_621_gml_Object_oBloodDropManager_Create_0
                  ,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a03298);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,
                  gml_Script__collide_anon_4599_anon_621_gml_Object_oBloodDropManager_Create_0,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a03178);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,
                  gml_Script_animate_anon_5549_anon_621_gml_Object_oBloodDropManager_Create_0,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a03208);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,gml_Script_anon_621_gml_Object_oBloodDropManager_Create_0,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
    puVar2 = (undefined8 *)(**(code **)(*DAT_141de12e8 + 0x10))(DAT_141de12e8,DAT_141a03228);
    FUN_140e609c0(DAT_141de12e8);
    FUN_140e645a0(&local_d8,
                  gml_Script____struct___306_anon_5819_gml_Object_oBloodDropManager_Create_0,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0xd;
  uStack_cc = 0xf;
  local_d8 = 0x100000100000045;
  local_c8 = 0x45;
  uStack_c4 = 0x1000001;
  uStack_c0 = uStack_d0;
  uStack_bc = 0xf;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_70);
  local_a8 = 0xe;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_80);
  local_a8 = 0x10;
  if ((int)local_60[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_1406b522e:
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_c8);
  }
  else {
    puVar2 = (undefined8 *)*local_58;
    if (puVar2 != &local_90) goto LAB_1406b522e;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
  local_a8 = 0x11;
  if ((int)local_60[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[1];
    if (puVar2 == &local_a0) goto LAB_1406b52c1;
  }
  local_c8 = *(undefined4 *)puVar2;
  uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_c8);
LAB_1406b52c1:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
  local_a8 = 0x13;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  FUN_140e609c0(param_1);
  if ((int)local_60[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_58[2];
  }
  if (puVar3 != puVar2) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0x14;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  FUN_140e609c0(param_1);
  if ((int)local_60[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_58[3];
  }
  if (puVar3 != puVar2) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0x16;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f4e0);
  FUN_140e609c0(param_1);
  if (4 < (int)local_60[0]) {
    puVar7 = (undefined8 *)local_58[4];
  }
  if (puVar7 != puVar2) {
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0x18;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
  pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar5);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar4;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar4);
  }
  fVar9 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar6);
  }
  *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
  *pdVar6 = (double)fVar9;
  local_a8 = 0x19;
  pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar5);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar4;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar4);
  }
  fVar9 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar6);
  }
  *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
  *pdVar6 = (double)fVar9;
  local_a8 = 0x1b;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x3fb999999999999a;
  local_a8 = 0x1d;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_a8 = 0x1e;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x3ff0000000000000;
  local_a8 = 0x1f;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x3ff0000000000000;
  local_a8 = 0x21;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56af0);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar7) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  local_a8 = 0x23;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5cd8);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar7) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  local_a8 = 0x24;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_a8 = 0x25;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f60c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

