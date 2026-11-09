// gml_Object_oFogWispSpawner_CleanUp_0 @ 0x140aeaed0

void gml_Object_oFogWispSpawner_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  double dVar10;
  undefined4 uVar11;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e4;
  longlong local_e0;
  undefined4 local_d4;
  longlong local_d0;
  undefined4 local_c4;
  double local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68;
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined1 *local_30;
  
  local_110 = "gml_Object_oFogWispSpawner_Step_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef3c8);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_108 = 1;
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_108 = 1;
  }
  else {
    local_108 = 2;
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
    if (((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) &&
       (*(int *)(*plVar7 + 0x24) != 0)) {
      local_108 = 4;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3118);
      FUN_140e609c0(param_1);
      FUN_1400460e0(puVar8,uVar6);
      FUN_140e60910(1);
      local_108 = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3118);
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3128);
      iVar3 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
      if (iVar3 == -2 || -1 < iVar3) {
        local_108 = 6;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3108);
        uStack_120 = CONCAT44(0xf,(undefined4)uStack_120);
        local_128 = 0x1000000000000ae;
        dVar10 = (double)FUN_140e4b060(&local_128);
        iVar3 = FUN_140edd1e0(param_1,param_2,(int)dVar10);
        uStack_b0 = (ulonglong)(uint)uStack_b0;
        local_b8 = (double)iVar3;
        uVar4 = FUN_140e851f0(&local_b8,uVar5,DAT_141955260,1);
        if ((1 << ((byte)(uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if ((1 << ((byte)(uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if (uVar4 < 0x80000000) {
          local_108 = 6;
        }
        else {
          local_108 = 8;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0;
          local_108 = 9;
          plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
          iVar3 = 0;
          if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
            iVar3 = *(int *)(*plVar7 + 0x24);
          }
          dVar10 = (double)FUN_140e78f00((longlong)(iVar3 + -1));
          iVar3 = (int)dVar10;
          if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)
             ) {
            if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar9 != &local_f0) {
            local_128 = *plVar9;
            uStack_120 = plVar9[1];
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f0);
            }
            FUN_140041b80(&local_f0,&local_128);
          }
          local_108 = 10;
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_100 = 0;
          local_f8 = 0;
          local_f4 = 5;
          plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f30f8);
          (**(code **)(*param_1 + 8))(param_1,DAT_1419f30c8);
          (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3118);
          FUN_140e87170(&local_f0,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
          plVar7 = param_1;
          FUN_140e87170(&local_f0,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
          uVar11 = (undefined4)((ulonglong)plVar7 >> 0x20);
          uStack_120 = CONCAT44(uStack_8c,uStack_90);
          local_128 = local_98;
          if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          FUN_140041b80(local_88,&local_128);
          local_48 = local_88;
          uStack_120 = CONCAT44(uStack_9c,uStack_a0);
          local_128 = local_a8;
          if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          FUN_140041b80(local_78,&local_128);
          local_40 = local_78;
          if (plVar9 != &local_68) {
            local_128 = *plVar9;
            uStack_120 = plVar9[1];
            if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_68);
            }
            FUN_140041b80(&local_68,&local_128);
          }
          local_38 = &local_68;
          uStack_120 = CONCAT44(0xf,(undefined4)uStack_120);
          local_128 = 0x1000000000000ae;
          local_b8 = 7.291122019556679e-304;
          uStack_b0 = uStack_120;
          if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_58);
          }
          FUN_140041b80(local_58,&local_b8);
          local_30 = local_58;
          plVar7 = (longlong *)
                   FUN_140e634e0(param_1,param_2,&local_100,4,CONCAT44(uVar11,DAT_141a0a7c8),
                                 &local_48);
          if (plVar7 != &local_d0) {
            local_128 = *plVar7;
            uStack_120 = plVar7[1];
            if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d0);
            }
            FUN_140041b80(&local_d0,&local_128);
          }
          local_108 = 0xb;
          plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4f28);
          if (plVar7 != &local_e0) {
            local_128 = *plVar7;
            uStack_120 = plVar7[1];
            if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e0);
            }
            FUN_140041b80(&local_e0,&local_128);
          }
          FUN_140e87930(&local_d0,DAT_1419f4f28,0x80000000,&local_e0);
        }
      }
      else {
        local_108 = 5;
      }
    }
    else {
      local_108 = 2;
    }
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

