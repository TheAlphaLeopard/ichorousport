// gml_Script_anon_1619_gml_Object_oRunManager_Create_0 @ 0x140d44170

undefined8 *
gml_Script_anon_1619_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  double dVar8;
  double local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@912@gml_Object_oRunManager_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x31;
  local_7c = 0;
  uVar7 = 0;
  uVar9 = 0;
  local_88 = 0.0;
  bVar2 = true;
  do {
    dVar8 = (double)CONCAT44(uVar9,uVar7);
    if (!bVar2) {
      local_48 = 0x31;
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
            if (uVar3 == 0xd) goto LAB_140d44245;
            FUN_140042910(&DAT_14172c3d8,&local_88,&local_88);
          }
          goto LAB_140d44251;
        }
        dVar8 = (double)FUN_140e4b060(&local_88);
LAB_140d44245:
        local_7c = 0;
      }
      local_88 = dVar8 + 1.0;
    }
LAB_140d44251:
    bVar2 = false;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
    iVar4 = FUN_140e851f0(&local_88,uVar5,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_48 = 0x35;
      if (param_4 < 1) {
        param_5 = &DAT_1419df7b0;
      }
      else {
        param_5 = (undefined8 *)*param_5;
      }
      if (param_5 != param_3) {
        local_68 = *(undefined4 *)param_5;
        uStack_64 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_60 = *(undefined4 *)(param_5 + 1);
        uStack_5c = *(uint *)((longlong)param_5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_68);
      }
      goto LAB_140d44461;
    }
    local_48 = 0x32;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
    iVar4 = FUN_140e4a740(&local_88);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uStack_6c = 10;
    local_78 = 9.88131291682493e-324;
    iVar4 = FUN_140e851f0(plVar6,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar4 == 0) {
      local_48 = 0x33;
      uStack_6c = local_7c;
      uStack_70 = local_80;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
        local_78 = local_88;
      }
      else {
        FUN_1400419b0(&local_78,&local_88);
      }
      uStack_5c = 7;
      local_68 = 10;
      FUN_140042560(&local_78,&local_68);
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if (&local_78 != param_3) {
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        uStack_60 = uStack_70;
        uStack_5c = uStack_6c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_68);
      }
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
LAB_140d44461:
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    uVar7 = SUB84(local_88,0);
    uVar9 = (undefined4)((ulonglong)local_88 >> 0x20);
  } while( true );
}

