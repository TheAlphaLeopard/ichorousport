// gml_Object_oHitable_Create_0 @ 0x140b07500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oHitable_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  longlong **pplVar11;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_60 = "gml_Object_oHindsight_Draw_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_58 = 2;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5c98);
  if (plVar5 != &local_98) {
    local_c8 = (undefined8 *)*plVar5;
    uStack_c0 = (char *)plVar5[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  local_50 = &local_98;
  uVar8 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_50);
  uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_58 = 4;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_58 = 5;
  }
  else {
    local_58 = 10;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ab8);
    local_c8 = (undefined8 *)CONCAT44(uRam0000000141dc7144,_DAT_141dc7140);
    uStack_c0 = (char *)CONCAT44(uRam0000000141dc714c,uRam0000000141dc7148);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
    local_50 = &local_98;
    uVar10 = CONCAT44(uVar12,DAT_141a0a0d8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar10,&local_50);
    uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_a0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_a8,puVar7);
    }
    FUN_1400462a0(&local_a8,uVar8);
    uVar3 = FUN_140e851f0(uVar6,&local_a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (uVar3 < 0x80000000) {
      local_58 = 0xc;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar7;
      }
      else {
        uVar9 = FUN_140e4b060(puVar7);
      }
      dVar1 = (double)FUN_1412a79b0(uVar9,0x4014000000000000);
      uVar3 = 0;
      if (dVar1 == 0.0) {
        local_58 = 0xe;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3578);
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3578);
        cVar2 = FUN_140e491e0(uVar6);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar5);
        }
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0xd;
        if (cVar2 == '\0') {
          uVar3 = 0x3ff00000;
        }
        *plVar5 = (ulonglong)uVar3 << 0x20;
      }
    }
    local_58 = 0x14;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5f28);
    if (plVar5 != &local_98) {
      local_c8 = (undefined8 *)*plVar5;
      uStack_c0 = (char *)plVar5[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    local_50 = &local_98;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar12,DAT_141a04798),&local_50);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_58 = 0x15;
    }
    else {
      local_58 = 0x17;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3578);
      uStack_c0 = (char *)CONCAT44(0xf,(undefined4)uStack_c0);
      local_c8 = (undefined8 *)0x10000010000001a;
      local_a8 = 0x10000010000001a;
      uStack_a0 = (undefined4)uStack_c0;
      uStack_9c = 0xf;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_a8);
      local_50 = &local_98;
      uStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_a0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
        local_a8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_a8,puVar7);
      }
      uStack_c0._4_4_ = 7;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,1);
      FUN_1400460e0(&local_a8,&local_c8);
      if ((1 << ((byte)uStack_c0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = (undefined8 *)local_a8;
      uStack_c0 = (char *)CONCAT44(uStack_9c,uStack_a0);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_c8);
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_48 = local_88;
      local_c8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_c0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_c8);
      local_40 = local_78;
      pplVar11 = &local_50;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_d8,3,pplVar11);
      uVar12 = (undefined4)((ulonglong)pplVar11 >> 0x20);
      local_58 = 0x19;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if (plVar5 != &local_98) {
        local_c8 = (undefined8 *)*plVar5;
        uStack_c0 = (char *)plVar5[1];
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_c8);
      }
      local_50 = &local_98;
      local_c8 = (undefined8 *)CONCAT44(uRam0000000141dc7144,_DAT_141dc7140);
      uStack_c0 = (char *)CONCAT44(uRam0000000141dc714c,uRam0000000141dc7148);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_c8);
      local_48 = local_88;
      local_c8 = (undefined8 *)CONCAT44(uRam0000000141dc7144,_DAT_141dc7140);
      uStack_c0 = (char *)CONCAT44(uRam0000000141dc714c,uRam0000000141dc7148);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_c8);
      local_40 = local_78;
      FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar12,DAT_141a049d8),&local_50);
      local_58 = 0x1b;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d0 = 0;
      uStack_c0 = "gml_Script_pal_swap_reset";
      local_c8 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_c8;
      local_cc = 5;
      local_d8 = 0;
      local_b8 = 0x71;
      iVar4 = FUN_140ec9d80();
      if (iVar4 != -1) {
        local_b8 = 0x71;
        FUN_140ec9dc0();
      }
      DAT_141dc7a50 = local_c8;
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

