// gml_Script____struct___358_gml_Object_oBossEmbraceHalf_Create_0 @ 0x1407838d0

undefined8 *
gml_Script____struct___358_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *local_res8;
  undefined4 uVar10;
  longlong **pplVar9;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8 [2];
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@34237@___struct___358@gml_Object_oBossEmbraceHalf_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x3f2;
  _eh_vector_constructor_iterator_(local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x3f3;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  local_64 = 0;
  local_70 = 0;
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_70);
  local_88 = 0x3f4;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_88 = 0x3f5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_88 = 0x3f6;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07398);
  uStack_3c = 0xd;
  local_48 = 0;
  if (&local_48 != puVar7) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_40;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_58);
  }
  local_88 = 0x3f7;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_88 = 0x3f8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_3c = 0xf;
  local_48 = 0x100000000000149;
  local_58 = 0x149;
  uStack_54 = 0x1000000;
  uStack_50 = uStack_40;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_58);
  local_res8 = local_a8;
  pplVar9 = &local_res8;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_b8,1,pplVar9);
  local_88 = 0x3f9;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0.0;
  bVar2 = true;
  do {
    uVar10 = (undefined4)((ulonglong)pplVar9 >> 0x20);
    if (!bVar2) {
      local_88 = 0x3f9;
      uVar4 = local_bc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_c8 = (double)CONCAT44(local_c8._4_4_,local_c8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_c8 = (double)((longlong)local_c8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_bc = 0;
              goto LAB_140783c15;
            }
            FUN_140042910(&DAT_14172c3d8,&local_c8,&local_c8);
          }
          goto LAB_140783c1e;
        }
        local_c8 = (double)FUN_140e4b060(&local_c8);
        local_bc = 0;
      }
LAB_140783c15:
      local_c8 = local_c8 + 1.0;
    }
LAB_140783c1e:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06e18);
    iVar5 = FUN_140e851f0(&local_c8,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      _eh_vector_destructor_iterator_(local_a8,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_98;
      return param_3;
    }
    local_88 = 0x3fa;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
    iVar5 = FUN_140e4a740(&local_c8);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
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
    }
    if (plVar8 != local_a8) {
      local_58 = (undefined4)*plVar8;
      uStack_54 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_50 = (undefined4)plVar8[1];
      uStack_4c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_58);
    }
    local_res8 = local_a8;
    pplVar9 = (longlong **)CONCAT44(uVar10,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_b8,1,pplVar9,&local_res8);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 != '\0') {
      local_88 = 0x3fa;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07e18);
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
      if (puVar7 != &local_80) {
        local_58 = *(undefined4 *)puVar7;
        uStack_54 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_50 = *(undefined4 *)(puVar7 + 1);
        uStack_4c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        FUN_140041b80(&local_80,&local_58);
      }
      iVar5 = FUN_140e4a740(&local_c8);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
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
      }
      FUN_140e87930(plVar8,DAT_141a07468,0x80000000,&local_80);
    }
  } while( true );
}

