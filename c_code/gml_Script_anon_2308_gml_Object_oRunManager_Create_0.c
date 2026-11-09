// gml_Script_anon_2308_gml_Object_oRunManager_Create_0 @ 0x140d451d0

undefined8 *
gml_Script_anon_2308_gml_Object_oRunManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double local_78;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1900@gml_Object_oRunManager_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x55;
  local_6c = 0;
  local_78 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_48 = 0x55;
      uVar3 = local_6c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_78 = (double)((longlong)local_78 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_6c = 0;
              goto LAB_140d452a5;
            }
            FUN_140042910(&DAT_14172c3d8,&local_78,&local_78);
          }
          goto LAB_140d452ae;
        }
        local_78 = (double)FUN_140e4b060(&local_78);
        local_6c = 0;
      }
LAB_140d452a5:
      local_78 = local_78 + 1.0;
    }
LAB_140d452ae:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f56c8);
    iVar4 = FUN_140e851f0(&local_78,uVar6,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    local_48 = 0x56;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f56f8);
    iVar4 = FUN_140e4a740(&local_78);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    local_5c = 10;
    local_68 = 1;
    iVar4 = FUN_140e851f0(plVar7,&local_68,DAT_141955260,0);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (iVar4 == 0) {
      local_48 = 0x57;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f56f8);
      FUN_140e609c0(param_1);
      uVar5 = FUN_140e4a740(&local_78);
      puVar9 = (undefined8 *)FUN_140e48e40(puVar8,uVar5);
      FUN_140e609c0(*(undefined8 *)*puVar8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 10;
      *puVar9 = 2;
      FUN_140e60910(2);
    }
  } while( true );
}

