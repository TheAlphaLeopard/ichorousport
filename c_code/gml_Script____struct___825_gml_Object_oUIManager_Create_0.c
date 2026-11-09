// gml_Script____struct___825_gml_Object_oUIManager_Create_0 @ 0x140e08650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___825_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  byte local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_c0 = "gml_Script_anon@7875@___struct___825@gml_Object_oUIManager_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x1b2;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x1b4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  local_64 = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_68 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) == 0) {
    local_70 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_70,puVar2);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3a28) &&
     (_Init_thread_header(&DAT_141de3a28), DAT_141de3a28 == -1)) {
    _DAT_141de391c = 0;
    _DAT_141de3910 = 0;
    _DAT_141de3930 = 0;
    _DAT_141de3924 = 0x3ff0000000000000;
    _DAT_141de3934 = 1;
    _DAT_141de3944 = 0;
    _DAT_141de3938 = 0x4000000000000000;
    _DAT_141de3948 = 2;
    _DAT_141de3958 = 0;
    _DAT_141de394c = 0x4008000000000000;
    _DAT_141de395c = 3;
    atexit((_func_5014 *)&LAB_14149a580);
    _Init_thread_footer(&DAT_141de3a28);
  }
  uVar9 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141de3910 + (longlong)(int)uVar9 * 0x14,&local_70,DAT_141955260,0);
    uVar11 = (undefined4)((ulonglong)pcVar10 >> 0x20);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141de3920 + (longlong)(int)uVar9 * 0x14);
      if (iVar1 == 0) {
        local_b8 = 0x1b7;
        plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
        if (((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) &&
           (0 < *(int *)(*plVar8 + 0x24))) {
          local_b8 = 0x1b8;
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_d8 = 0;
          local_d0 = 0;
          local_cc = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02fc8);
          FUN_140e63610(param_1,param_2,&local_d8,0,uVar6,0);
        }
        local_b8 = 0x1b9;
      }
      else if (iVar1 == 1) {
        local_b8 = 0x1bc;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a030a8);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
        if (puVar2 != &local_b0) {
          local_e8 = *puVar2;
          uStack_e0 = *(undefined4 *)(puVar2 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
          if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b0);
          }
          FUN_140041b80(&local_b0,&local_e8);
        }
        local_60 = &local_b0;
        local_e8 = CONCAT44(uRam0000000141dc7984,_DAT_141dc7980);
        uStack_e0 = uRam0000000141dc7988;
        uStack_dc = uRam0000000141dc798c;
        if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        FUN_140041b80(&local_a0,&local_e8);
        local_58 = &local_a0;
        if (puVar3 != &local_90) {
          local_e8 = *puVar3;
          uStack_e0 = *(undefined4 *)(puVar3 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_90);
          }
          FUN_140041b80(&local_90,&local_e8);
        }
        local_50 = &local_90;
        FUN_140e609c0(param_1);
        puVar3 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar11,DAT_141a00c58),&local_60)
        ;
        if (puVar3 != puVar4) {
          local_e8 = *puVar3;
          uStack_e0 = *(undefined4 *)(puVar3 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_e8);
        }
        FUN_140e60910(1);
        local_b8 = 0x1bd;
        uStack_dc = 0;
        local_e8 = 0x3fe0000000000000;
        iVar1 = FUN_140e851f0(puVar2,&local_e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        if (iVar1 != -2 && iVar1 < 0) {
          local_b8 = 0x1bf;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar2);
          }
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          *puVar2 = 0;
          local_b8 = 0x1c0;
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar2);
          }
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          *puVar2 = 0;
          local_b8 = 0x1c1;
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar2);
          }
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          *puVar2 = 0x4000000000000000;
        }
        local_b8 = 0x1c3;
      }
      else if (iVar1 == 2) {
        local_b8 = 0x1c6;
        uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        FUN_140162d40(uVar6,1);
        local_b8 = 0x1c7;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b58);
        uVar9 = FUN_140e851f0(uVar6,uVar7,DAT_141955260,1);
        if (uVar9 < 0x80000000) {
          local_b8 = 0x1c8;
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar2);
          }
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          *puVar2 = 0x4008000000000000;
        }
        local_b8 = 0x1c9;
      }
      else if (iVar1 == 3) {
        local_b8 = 0x1cc;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02f88);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a030a8);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
        if (puVar2 != &local_b0) {
          local_e8 = *puVar2;
          uStack_e0 = *(undefined4 *)(puVar2 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
          if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b0);
          }
          FUN_140041b80(&local_b0,&local_e8);
        }
        local_60 = &local_b0;
        if (puVar3 != &local_a0) {
          local_e8 = *puVar3;
          uStack_e0 = *(undefined4 *)(puVar3 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a0);
          }
          FUN_140041b80(&local_a0,&local_e8);
        }
        local_58 = &local_a0;
        if (puVar4 != &local_90) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_90);
          }
          FUN_140041b80(&local_90,&local_e8);
        }
        local_50 = &local_90;
        FUN_140e609c0(param_1);
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar11,DAT_141a00c58),&local_60)
        ;
        if (puVar4 != puVar5) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_e8);
        }
        FUN_140e60910(1);
        local_b8 = 0x1cd;
        local_74 = *(undefined4 *)((longlong)puVar3 + 0xc);
        local_78 = *(undefined4 *)(puVar3 + 1);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) == 0) {
          local_80 = *puVar3;
        }
        else {
          FUN_1400419b0(&local_80,puVar3);
        }
        uStack_dc = 0;
        local_e8 = 0x3fe0000000000000;
        FUN_1400462a0(&local_80,&local_e8);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        iVar1 = FUN_140e851f0(puVar2,&local_80,DAT_141955260,1);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        if (0 < iVar1) {
          local_b8 = 0x1cf;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02f88);
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
          FUN_140e609c0(param_1);
          if (puVar2 != puVar3) {
            local_e8 = *puVar2;
            uStack_e0 = *(undefined4 *)(puVar2 + 1);
            uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_e8);
          }
          FUN_140e60910(1);
          local_b8 = 0x1d0;
          puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar2);
          }
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          *puVar2 = 0;
        }
        local_b8 = 0x1d2;
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

