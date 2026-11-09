// gml_Script____struct___824_gml_Object_oUIManager_Create_0 @ 0x140e03310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___824_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  
  local_110 = "gml_Script_anon@5367@___struct___824@gml_Object_oUIManager_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x134;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x137;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff228);
  local_8c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_90 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_98,puVar3);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3a30) &&
     (_Init_thread_header(&DAT_141de3a30), DAT_141de3a30 == -1)) {
    _DAT_141de396c = 0;
    _DAT_141de3960 = 0;
    _DAT_141de3980 = 0;
    _DAT_141de3974 = 0x3ff0000000000000;
    _DAT_141de3984 = 1;
    _DAT_141de3994 = 0;
    _DAT_141de3988 = 0x4000000000000000;
    _DAT_141de3998 = 2;
    _DAT_141de39a8 = 0;
    _DAT_141de399c = 0x4008000000000000;
    _DAT_141de39ac = 3;
    atexit((_func_5014 *)&LAB_14149a560);
    _Init_thread_footer(&DAT_141de3a30);
  }
  uVar9 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de3960 + (longlong)(int)uVar9 * 0x14,&local_98,DAT_141955260,0);
    uVar10 = (undefined4)((ulonglong)pcVar11 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de3970 + (longlong)(int)uVar9 * 0x14);
      if (iVar2 == 0) {
        local_108 = 0x13a;
      }
      else if (iVar2 == 1) {
        local_108 = 0x13d;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        uStack_12c = 0xf;
        local_138 = 0x10000000000013a;
        local_e8 = 0x10000000000013a;
        uStack_e0 = uStack_130;
        uStack_dc = 0xf;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_e8);
        local_88 = &local_d8;
        uVar8 = CONCAT44(uVar10,DAT_141a02ef8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar8,&local_88);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar1 = FUN_140e491e0(uVar7);
        if (cVar1 == '\0') {
          local_108 = 0x13f;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4568);
          puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03388);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4568);
          if (puVar3 != &local_d8) {
            local_138 = *puVar3;
            uStack_130 = *(undefined4 *)(puVar3 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            FUN_140041b80(&local_d8,&local_138);
          }
          local_88 = &local_d8;
          local_138 = CONCAT44(uRam00000001419ee804,_DAT_1419ee800);
          uStack_130 = uRam00000001419ee808;
          uStack_12c = uRam00000001419ee80c;
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_138);
          local_80 = &local_c8;
          if (puVar4 != &local_b8) {
            local_138 = *puVar4;
            uStack_130 = *(undefined4 *)(puVar4 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            FUN_140041b80(&local_b8,&local_138);
          }
          local_78 = &local_b8;
          FUN_140e609c0(param_1);
          puVar4 = (undefined8 *)
                   FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar10,DAT_141a00c58),
                                 &local_88);
          if (puVar4 != puVar5) {
            local_138 = *puVar4;
            uStack_130 = *(undefined4 *)(puVar4 + 1);
            uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_138);
          }
          FUN_140e60910(1);
          local_108 = 0x140;
          puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9e58);
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02f78);
          FUN_140e609c0(param_1);
          uStack_dc = 0;
          local_e8 = 0x3ff0000000000000;
          FUN_1400462a0(&local_e8,puVar3);
          local_9c = 0;
          local_a8 = 0x4000000000000000;
          FUN_140042560(&local_a8,&local_e8);
          if ((local_9c & 0xffffff) == 0) {
            uVar10 = (undefined4)local_a8;
          }
          else {
            uVar10 = FUN_140e4b060(&local_a8);
          }
          uVar7 = FUN_140e78ec0(uVar10,0,0x3ff0000000000000);
          uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
          uStack_f0 = *(undefined4 *)(puVar4 + 1);
          if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
            local_f8 = *puVar4;
          }
          else {
            FUN_1400419b0(&local_f8,puVar4);
          }
          uStack_12c = 0;
          local_138 = uVar7;
          FUN_140042560(&local_f8,&local_138);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if (&local_f8 != puVar5) {
            local_138 = local_f8;
            uStack_130 = uStack_f0;
            uStack_12c = uStack_ec;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_138);
          }
          if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140e60910(1);
          local_108 = 0x141;
          uStack_12c = 0;
          local_138 = 0x3fefd70a3d70a3d7;
          iVar2 = FUN_140e851f0(puVar3,&local_138,DAT_141955260,1);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if (0 < iVar2) {
            local_108 = 0x143;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419f4568);
            puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4568);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            *puVar3 = 0x3ff0000000000000;
            local_108 = 0x144;
            puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02f78);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            *puVar3 = 0;
            local_108 = 0x145;
            puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            *puVar3 = 0x4000000000000000;
            local_108 = 0x146;
            puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            *puVar3 = 0;
          }
          local_108 = 0x148;
        }
        else {
          local_108 = 0x13e;
        }
      }
      else if (iVar2 == 2) {
        local_108 = 0x14b;
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        FUN_140162d40(uVar7,1);
        local_108 = 0x14c;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
        uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b58);
        uVar9 = FUN_140e851f0(uVar7,uVar8,DAT_141955260,1);
        if (uVar9 < 0x80000000) {
          local_108 = 0x14d;
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = 0x4008000000000000;
        }
        local_108 = 0x14e;
      }
      else if (iVar2 == 3) {
        local_108 = 0x151;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02f78);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9e58);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03308);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02f78);
        if (puVar3 != &local_d8) {
          local_138 = *puVar3;
          uStack_130 = *(undefined4 *)(puVar3 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_138);
        }
        local_88 = &local_d8;
        if (puVar4 != &local_c8) {
          local_138 = *puVar4;
          uStack_130 = *(undefined4 *)(puVar4 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_138);
        }
        local_80 = &local_c8;
        if (puVar5 != &local_b8) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_138);
        }
        local_78 = &local_b8;
        FUN_140e609c0(param_1);
        puVar5 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar10,DAT_141a00c58),&local_88
                              );
        if (puVar5 != puVar6) {
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        FUN_140e60910(1);
        local_108 = 0x152;
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
          local_f8 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_f8,puVar4);
        }
        uStack_dc = 0;
        local_e8 = 0x3fe0000000000000;
        FUN_1400462a0(&local_f8,&local_e8);
        if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        iVar2 = FUN_140e851f0(puVar3,&local_f8,DAT_141955260,1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        if (0 < iVar2) {
          local_108 = 0x154;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a02f78);
          (**(code **)(*param_1 + 8))(param_1,DAT_1419f9e58);
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02f78);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = 0;
          local_108 = 0x155;
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4568);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = 0;
          local_108 = 0x156;
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = 0;
        }
        local_108 = 0x158;
      }
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

