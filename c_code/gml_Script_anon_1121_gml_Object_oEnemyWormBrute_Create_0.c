// gml_Script_anon_1121_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8d800

undefined8 *
gml_Script_anon_1121_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  double dVar12;
  double local_88;
  uint local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@881@gml_Object_oEnemyWormBrute_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x2e;
  FUN_140041df0(local_78,param_4,2,param_5);
  uVar8 = local_78[0];
  local_7c = 0xffffff;
  local_88 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x2e;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_78[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_70[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_48 = 0x2e;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23e8);
    if ((int)uVar8 < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_70[1];
    }
    if (puVar4 != puVar9) {
      local_68 = *(undefined4 *)puVar4;
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_60 = *(undefined4 *)(puVar4 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_68);
    }
  }
  local_48 = 0x30;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  uVar11 = 0;
  uVar13 = 0;
  local_88 = 0.0;
  bVar1 = true;
  do {
    dVar12 = (double)CONCAT44(uVar13,uVar11);
    if (!bVar1) {
      local_48 = 0x30;
      uVar3 = local_7c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_88 = (double)CONCAT44(local_88._4_4_,local_88._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_88 = (double)((longlong)local_88 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140a8d9a1;
            FUN_140042910(&DAT_14172c3d8,&local_88,&local_88);
          }
          goto LAB_140a8d9ad;
        }
        dVar12 = (double)FUN_140e4b060(&local_88);
LAB_140a8d9a1:
        local_7c = 0;
      }
      local_88 = dVar12 + 1.0;
    }
LAB_140a8d9ad:
    bVar1 = false;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    iVar2 = FUN_140e851f0(&local_88,uVar5,DAT_141955260,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      local_48 = 0x33;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f23e8);
      FUN_140e609c0(param_1);
      if (1 < (int)uVar8) {
        puVar10 = (undefined8 *)local_70[1];
      }
      if (puVar10 != puVar4) {
        local_68 = *(undefined4 *)puVar10;
        uStack_64 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_60 = *(undefined4 *)(puVar10 + 1);
        uStack_5c = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_68);
      }
      FUN_140e60910(1);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (0 < (int)uVar8) {
        uVar7 = (ulonglong)local_78[0];
        puVar10 = local_70;
        do {
          puVar4 = (undefined8 *)*puVar10;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
          puVar10 = puVar10 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      FUN_140e4cd60(local_70);
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    local_48 = 0x31;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2538);
    FUN_140e609c0(param_1);
    if ((int)uVar8 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_70;
    }
    uVar11 = FUN_140e4a740(&local_88);
    puVar6 = (undefined8 *)FUN_140e48e40(puVar4,uVar11);
    FUN_140e609c0(*(undefined8 *)*puVar4);
    if (puVar9 != puVar6) {
      local_68 = *(undefined4 *)puVar9;
      uStack_64 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_60 = *(undefined4 *)(puVar9 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_68);
    }
    FUN_140e60910(2);
    uVar11 = SUB84(local_88,0);
    uVar13 = (undefined4)((ulonglong)local_88 >> 0x20);
    uVar8 = local_78[0];
  } while( true );
}

