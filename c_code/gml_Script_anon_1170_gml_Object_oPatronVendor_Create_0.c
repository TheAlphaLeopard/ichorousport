// gml_Script_anon_1170_gml_Object_oPatronVendor_Create_0 @ 0x140bca2a0

undefined8 *
gml_Script_anon_1170_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff60;
  double local_98;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@928@gml_Object_oPatronVendor_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x46;
  local_8c = 0;
  local_98 = 0.0;
  bVar2 = true;
  do {
    iVar4 = 0;
    if (!bVar2) {
      local_48 = 0x46;
      uVar3 = local_8c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_98 = (double)CONCAT44(local_98._4_4_,local_98._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_98 = (double)((longlong)local_98 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140bca384;
            FUN_140042910(&DAT_14172c3d8,&local_98,&local_98);
          }
          goto LAB_140bca390;
        }
        local_98 = (double)FUN_140e4b060(&local_98);
LAB_140bca384:
        local_8c = 0;
      }
      local_98 = local_98 + 1.0;
    }
LAB_140bca390:
    bVar2 = false;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7268);
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    local_5c = 0;
    local_68 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_98,&local_68,DAT_141955260,1);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      DAT_141dc7a50 = (undefined8 *)local_58;
      return param_3;
    }
    local_48 = 0x47;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7268);
    iVar4 = FUN_140e4a740(&local_98);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
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
      plVar7 = plVar5;
    }
    FUN_140e87440(plVar7,DAT_141a0a968,0x80000000,&local_78,
                  (ulonglong)in_stack_ffffffffffffff58 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    iVar4 = FUN_140e4a740(&local_98);
    if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar6 = FUN_140069500(plVar5);
    in_stack_ffffffffffffff60 = 0;
    in_stack_ffffffffffffff58 = &local_78;
    FUN_140e63610(uVar6,param_2,&local_88,0,in_stack_ffffffffffffff58,0);
  } while( true );
}

