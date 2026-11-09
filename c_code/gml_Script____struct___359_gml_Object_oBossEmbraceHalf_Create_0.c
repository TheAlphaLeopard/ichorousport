// gml_Script____struct___359_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140785630

undefined8 *
gml_Script____struct___359_gml_Object_oBossEmbraceHalf_Create_0
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
  code *pcVar9;
  undefined4 uVar10;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_e0 = "gml_Script_anon@35323@___struct___359@gml_Object_oBossEmbraceHalf_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x415;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x416;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_80);
  local_d8 = 0x417;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a06608,0x80000000,&local_90);
  local_d8 = 0x418;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0;
  local_a0 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a06248,0x80000000,&local_a0);
  local_d8 = 0x419;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a07408,0x80000000,&local_b0);
  local_d8 = 0x41a;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a07188,0x80000000,&local_c0);
  local_d8 = 0x41c;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x412e847e00000000;
  local_d8 = 0x41d;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0.0;
  bVar2 = true;
  do {
    uVar10 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (!bVar2) {
      local_d8 = 0x41d;
      uVar4 = local_fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_108 = (double)((longlong)local_108 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_fc = 0;
              goto LAB_1407859ab;
            }
            FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
          }
          goto LAB_1407859b5;
        }
        local_108 = (double)FUN_140e4b060(&local_108);
        local_fc = 0;
      }
LAB_1407859ab:
      local_108 = local_108 + 1.0;
    }
LAB_1407859b5:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06e18);
    iVar5 = FUN_140e851f0(&local_108,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      _eh_vector_destructor_iterator_(local_70,0x10,1,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    local_d8 = 0x41e;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
    iVar5 = FUN_140e4a740(&local_108);
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
    if (plVar8 != local_70) {
      local_60 = (undefined4)*plVar8;
      uStack_5c = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_58 = (undefined4)plVar8[1];
      uStack_54 = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_70[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_70);
      }
      FUN_140041b80(local_70,&local_60);
    }
    local_res8 = local_70;
    pcVar9 = (code *)CONCAT44(uVar10,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_f8,1,pcVar9,&local_res8);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 != '\0') {
      local_d8 = 0x41e;
      plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      local_c4 = 0;
      local_d0 = 0x4000000000000000;
      iVar5 = FUN_140e4a740(&local_108);
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
      FUN_140e87930(plVar8,DAT_141a07468,0x80000000,&local_d0);
    }
  } while( true );
}

