// gml_Script_anon_1404_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8de80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1404_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  double dVar11;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_90 = "gml_Script_anon@1121@gml_Object_oEnemyWormBrute_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x3b;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  uVar10 = 0;
  uVar12 = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x3d;
  local_cc = 0;
  local_d8 = 0.0;
  bVar1 = true;
  do {
    dVar11 = (double)CONCAT44(uVar12,uVar10);
    if (!bVar1) {
      local_88 = 0x3d;
      uVar2 = local_cc & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_d8 = (double)((longlong)local_d8 + 1);
          }
          else {
            if (uVar2 == 0xd) goto LAB_140a8df9a;
            FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
          }
          goto LAB_140a8dfa8;
        }
        dVar11 = (double)FUN_140e4b060(&local_d8);
LAB_140a8df9a:
        local_cc = 0;
      }
      local_d8 = dVar11 + 1.0;
    }
LAB_140a8dfa8:
    bVar1 = false;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
    iVar3 = FUN_140e851f0(&local_d8,uVar4,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_98;
      return param_3;
    }
    local_88 = 0x3e;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07d48);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
      local_b8 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_b8,puVar5);
    }
    FUN_140042560(&local_b8,puVar9);
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << (local_80[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_a8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_60 = local_80;
    local_a8 = _DAT_1419eb2d0;
    uStack_a4 = uRam00000001419eb2d4;
    uStack_a0 = uRam00000001419eb2d8;
    uStack_9c = uRam00000001419eb2dc;
    if ((1 << (local_70[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_a8);
    local_58 = local_70;
    FUN_140e609c0(param_1);
    uVar10 = FUN_140e4a740(&local_d8);
    puVar7 = (undefined4 *)FUN_140e48e40(puVar6,uVar10);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    puVar8 = (undefined4 *)FUN_140e79090(&local_c8,2,&local_60);
    if (puVar8 != puVar7) {
      local_a8 = *puVar8;
      uStack_a4 = puVar8[1];
      uStack_a0 = puVar8[2];
      uStack_9c = puVar8[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_a8);
    }
    FUN_140e60910(2);
    uVar10 = SUB84(local_d8,0);
    uVar12 = (undefined4)((ulonglong)local_d8 >> 0x20);
  } while( true );
}

