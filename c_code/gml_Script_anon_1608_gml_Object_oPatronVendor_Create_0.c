// gml_Script_anon_1608_gml_Object_oPatronVendor_Create_0 @ 0x140bcaa00

undefined8 *
gml_Script_anon_1608_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1170@gml_Object_oPatronVendor_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x51;
  local_9c = 0;
  local_a8 = 0.0;
  bVar2 = true;
  do {
    iVar5 = 0;
    if (!bVar2) {
      local_48 = 0x51;
      uVar4 = local_9c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_a8 = (double)((longlong)local_a8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_9c = 0;
              goto LAB_140bcaaf6;
            }
            FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
          }
          goto LAB_140bcaaff;
        }
        local_a8 = (double)FUN_140e4b060(&local_a8);
        local_9c = 0;
      }
LAB_140bcaaf6:
      local_a8 = local_a8 + 1.0;
    }
LAB_140bcaaff:
    bVar2 = false;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7268);
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar5 = *(int *)(*plVar6 + 0x24);
    }
    local_5c = 0;
    local_68 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_a8,&local_68,DAT_141955260,1);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    local_48 = 0x52;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7268);
    iVar5 = FUN_140e4a740(&local_a8);
    if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
    in_stack_ffffffffffffff48 =
         (undefined8 *)((ulonglong)in_stack_ffffffffffffff48 & 0xffffffffffffff00);
    FUN_140e87440(plVar6,DAT_1419f63b8,0x80000000,&local_78,in_stack_ffffffffffffff48,
                  in_stack_ffffffffffffff50);
    cVar3 = FUN_140e491e0(&local_78);
    if (cVar3 == '\0') {
      local_48 = 0x53;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7268);
      iVar5 = FUN_140e4a740(&local_a8);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar8 = plVar6;
      }
      FUN_140e87440(plVar8,DAT_141a05028,0x80000000,&local_88,
                    (ulonglong)in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff50 & 0xffffffffffffff00);
      iVar5 = FUN_140e4a740(&local_a8);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar7 = FUN_140069500(plVar6);
      in_stack_ffffffffffffff50 = 0;
      in_stack_ffffffffffffff48 = &local_88;
      FUN_140e63610(uVar7,param_2,&local_98,0,in_stack_ffffffffffffff48,0);
    }
  } while( true );
}

