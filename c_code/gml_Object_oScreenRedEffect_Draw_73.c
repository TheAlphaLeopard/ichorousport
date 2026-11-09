// gml_Object_oScreenRedEffect_Draw_73 @ 0x140d63a60

void gml_Object_oScreenRedEffect_Draw_73(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  
  local_80 = "gml_Object_oScreenRedEffect_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_78 = 4;
  local_9c = 0;
  local_a8 = 0xc08f400000000000;
  FUN_140e86fa0(0,DAT_141a02ee8,0x80000000,&local_a8);
  local_78 = 6;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e8da20(&local_b8,param_1,0);
  if (puVar5 != puVar4) {
    local_98 = *puVar5;
    uStack_94 = puVar5[1];
    uStack_90 = puVar5[2];
    uStack_8c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_98);
  }
  FUN_140e60910(1);
  local_78 = 7;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f84f8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e8da20(&local_c8,param_1,0);
  if (puVar5 != puVar4) {
    local_98 = *puVar5;
    uStack_94 = puVar5[1];
    uStack_90 = puVar5[2];
    uStack_8c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_98);
  }
  FUN_140e60910(1);
  local_78 = 8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0.0;
  local_78 = 10;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eeae8);
  uVar1 = FUN_140e78f40(3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar1;
  local_78 = 0xc;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eeae8);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar7;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar7);
  }
  uVar10 = (ulonglong)dVar11;
  uVar9 = (uint)uVar10;
  do {
    while( true ) {
      if ((int)uVar9 < 1) {
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        DAT_141dc7a50 = (undefined8 *)local_88;
        return;
      }
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
      local_78 = 0xe;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
      FUN_140e609c0(param_1);
      uVar2 = FUN_140e4a740(&local_d8);
      puVar8 = (undefined8 *)FUN_140e48e40(puVar6,uVar2);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      uVar1 = FUN_140e79480(0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = uVar1;
      FUN_140e60910(2);
      local_78 = 0xf;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f84f8);
      FUN_140e609c0(param_1);
      uVar2 = FUN_140e4a740(&local_d8);
      puVar8 = (undefined8 *)FUN_140e48e40(puVar6,uVar2);
      FUN_140e609c0(*(undefined8 *)*puVar6);
      uVar1 = FUN_140e794b0(0,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = uVar1;
      FUN_140e60910(2);
      local_78 = 0x11;
      uVar3 = local_cc & 0xffffff;
      if (uVar3 != 0) break;
LAB_140d63df8:
      local_d8 = local_d8 + 1.0;
    }
    if (uVar3 == 1) {
      local_d8 = (double)FUN_140e4b060(&local_d8);
      local_cc = 0;
      goto LAB_140d63df8;
    }
    if (uVar3 == 7) {
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_d8 = (double)((longlong)local_d8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_cc = 0;
        goto LAB_140d63df8;
      }
      FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
    }
  } while( true );
}

