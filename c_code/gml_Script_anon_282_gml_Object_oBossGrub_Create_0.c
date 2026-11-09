// gml_Script_anon_282_gml_Object_oBossGrub_Create_0 @ 0x140790850

void gml_Script_anon_282_gml_Object_oBossGrub_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50 [5];
  
  local_70 = "gml_Object_oBossEmbraceHalf_CleanUp_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_68 = 2;
  local_ac = 0;
  local_b8 = 0.0;
  bVar2 = true;
  do {
    uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    if (!bVar2) {
      local_68 = 2;
      uVar4 = local_ac & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_b8 = (double)((longlong)local_b8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_ac = 0;
              goto LAB_14079094b;
            }
            FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
          }
          goto LAB_140790954;
        }
        local_b8 = (double)FUN_140e4b060(&local_b8);
        local_ac = 0;
      }
LAB_14079094b:
      local_b8 = local_b8 + 1.0;
    }
LAB_140790954:
    bVar2 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07eb8);
    iVar5 = FUN_140e851f0(&local_b8,uVar6,DAT_141955260,1);
    if ((iVar5 == -2) || (-1 < iVar5)) {
      local_68 = 8;
      FUN_140e98b30(param_1,param_2);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_78;
      return;
    }
    local_68 = 3;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
    iVar5 = FUN_140e4a740(&local_b8);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != local_60) {
      local_88 = (undefined4)*plVar7;
      uStack_84 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_80 = (undefined4)plVar7[1];
      uStack_7c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_60[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_88);
    }
    local_98 = local_60;
    pcVar8 = (code *)CONCAT44(uVar9,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_a8,1,pcVar8,&local_98);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 != '\0') {
      local_68 = 4;
      plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06e38);
      iVar5 = FUN_140e4a740(&local_b8);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar7 != local_50) {
        local_88 = (undefined4)*plVar7;
        uStack_84 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_80 = (undefined4)plVar7[1];
        uStack_7c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_50[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_50);
        }
        FUN_140041b80(local_50,&local_88);
      }
      local_90 = local_50;
      FUN_140edd0e0(param_1,param_2,1,&local_90);
    }
  } while( true );
}

