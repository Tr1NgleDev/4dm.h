#pragma once
#ifndef GUI_CONTENTBOX_H
#define GUI_CONTENTBOX_H
#include "gui.h"
namespace fdm
{
	class QuadRenderer;
	class FontRenderer;
	namespace gui
	{
		class Element;
		class Window;
		class ElemContainer;
		enum AlignmentX;
		enum AlignmentY;
		
		class ContentBox : public Element, public Window, public ElemContainer 
		{
		public:
			static const int scrollbarWidth = 20;
			gui::Window* parent;
			std::vector<gui::Element*> elements;
			int selectedElemIndex;
			bool active;
			PAD(3);
			unsigned int width;
			unsigned int height;
			int xOffset;
			int yOffset;
			AlignmentX xAlign;
			AlignmentY yAlign;
			int xScroll;
			int yScroll;
			unsigned int scrollW = 0;
			unsigned int scrollH = 0;
			bool scrollingX;
			bool scrollingY;
			PAD(2);
			int scrollbarClickPos;
			int scrollStep;
			bool viewUpdateFlag;

			~ContentBox()
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x500D0)
					)(this);
			}
			void offsetY(int offset) override
			{
				this->yOffset = offset;
			}
			QuadRenderer* getQuadRenderer() override 
			{
				return reinterpret_cast<QuadRenderer* (__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x59E60)
					)(this);
			}
			FontRenderer* getFont() override
			{
				return reinterpret_cast<FontRenderer* (__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x59E70)
					)(this);
			}
			GLFWwindow* getGLFWwindow() override
			{
				return reinterpret_cast<GLFWwindow* (__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x59E80)
					)(this);
			}
			void getCursorPos(int* x, int* y) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, int*, int*)>(
					base + idaOffsetFix(0x59E90)
					)(this, x, y);
			}
			void getSize(int* width, int* height) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, int*, int*)>(
					base + idaOffsetFix(0x59F00)
					)(this, width, height);
			}
			void changeViewport(const glm::ivec4& pos, const glm::ivec2& scroll) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, const glm::ivec4&, const glm::ivec2&)>(
					base + idaOffsetFix(0x59F10)
					)(this, pos, scroll);
			}
			void getPos(const gui::Window* w, int* x, int* y) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, const gui::Window*, int*, int*)>(
					base + idaOffsetFix(0x5A050)
					)(this, w, x, y);
			}
			void getSize(const gui::Window* w, int* width, int* height) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, const gui::Window*, int*, int*)>(
					base + idaOffsetFix(0x5A100)
					)(this, w, width, height);
			}
			bool touchingMouse() 
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x5A110)
					)(this);
			}
			void resetViewport(bool applyScroll)
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, bool)>(
					base + idaOffsetFix(0x5A1B0)
					)(this, applyScroll);
			}
			void render(gui::Window* w) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, gui::Window*)>(
					base + idaOffsetFix(0x5A250)
					)(this, w);
			}
			void mouseInput(const gui::Window* w, double xPos, double yPos) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, const gui::Window*, double, double)>(
					base + idaOffsetFix(0x5AD70)
					)(this, w, xPos, yPos);
			}
			bool scrollInput(const gui::Window* w, double xOff, double yOff) override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*, const gui::Window*, double, double)>(
					base + idaOffsetFix(0x5AFF0)
					)(this, w, xOff, yOff);
			}
			bool mouseButtonInput(const gui::Window* w, int button, int action, int mods) override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*, const gui::Window*, int, int, int)>(
					base + idaOffsetFix(0x5B140)
					)(this, w, button, action, mods);
			}
			bool keyInput(const gui::Window* w, int key, int scancode, int action, int mods) override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*, const gui::Window*, int, int, int, int)>(
					base + idaOffsetFix(0x5B430)
					)(this, w, key, scancode, action, mods);
			}
			void select() override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x5B5F0)
					)(this);
			}
			void deselect() override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*)>(
					base + idaOffsetFix(0x5B620)
					)(this);
			}
			void addElement(gui::Element* e) override
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*, gui::Element*)> (
					base + idaOffsetFix(0x5B660)
					)(this, e);
			}
			bool removeElement(gui::Element* e) override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*, gui::Element*)> (
					base + idaOffsetFix(0x5B6A0)
					)(this, e);
			}
			bool selectElement(gui::Element* e) override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*, gui::Element*)> (
					base + idaOffsetFix(0x5B710)
					)(this, e);
			}
			void clear() override 
			{
				reinterpret_cast<void(__thiscall*)(gui::ContentBox*)> (
					base + idaOffsetFix(0x5B7D0)
					)(this);
			}
			bool empty() override
			{
				return reinterpret_cast<bool(__thiscall*)(gui::ContentBox*)> (
					base + idaOffsetFix(0x5B820)
					)(this);
			}
			void alignX(AlignmentX a) override
			{
				this->xAlign = a;
			}
			void alignY(AlignmentY a) override
			{
				this->yAlign = a;
			}
			void offsetX(int offset) override
			{
				this->xOffset = offset;
			}
		};

	}
}
#endif